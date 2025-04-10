#include <ros/ros.h>
#include <sensor_msgs/JointState.h>
#include <serial/serial.h>

serial::Serial ser;
double vacuum_status = 0.0; 

bool initSerial(const std::string& port, int baudrate) {
    try {
        ser.setPort(port);
        ser.setBaudrate(baudrate);
        serial::Timeout timeout = serial::Timeout::simpleTimeout(1000);
        ser.setTimeout(timeout);
        ser.open();
        if (ser.isOpen()) {
            ROS_INFO("Serial port opened successfully: %s", port.c_str());
            return true;
        } else {
            ROS_ERROR("Failed to open serial port: %s", port.c_str());
            return false;
        }
    } catch (const std::exception& e) {
        ROS_ERROR("Serial port exception: %s", e.what());
        return false;
    }
}

void publishVacuumStatus(ros::Publisher& pub) {
    sensor_msgs::JointState msg;
    msg.header.stamp = ros::Time::now();
    msg.name.push_back("vacuum");
    msg.position.push_back(vacuum_status);
    pub.publish(msg);
}

void vacuumCmdCallback(const sensor_msgs::JointState::ConstPtr& msg, ros::Publisher& status_pub) {
    if (msg->position.empty()) {
        ROS_WARN("Received empty command.");
        return;
    }

    double cmd = msg->position[0];
    if (cmd == 0.0) {
        if (vacuum_status != 0.0) {
            vacuum_status = 0.0;
            ser.write("OFF\n"); // 发送 OFF 指令
            ROS_INFO("Sent OFF command, vacuum_status updated to 0.0");
        }
    } else if (cmd == 1.0) {
        if (vacuum_status != 1.0) {
            vacuum_status = 1.0;
            ser.write("ON\n");  // 发送 ON 指令
            ROS_INFO("Sent ON command, vacuum_status updated to 1.0");
        }
    } else {
        ROS_WARN("Invalid command value: %f", cmd);
    }
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "vacuum_control_node");
    ros::NodeHandle nh;

    std::string port;
    int baudrate;
    nh.param<std::string>("serial_port", port, "/dev/ttyUSB0");  // 默认串口
    nh.param<int>("baudrate", baudrate, 9600);  // 默认波特率

    if (!initSerial(port, baudrate)) {
        return -1;
    }

    ros::Publisher status_pub = nh.advertise<sensor_msgs::JointState>("/vacuum_status", 10);
    ros::Subscriber cmd_sub = nh.subscribe<sensor_msgs::JointState>(
        "/vacuum_cmd", 10, boost::bind(&vacuumCmdCallback, _1, status_pub));
    ros::Publisher cmd_pub = nh.advertise<sensor_msgs::JointState>("/vacuum_cmd", 10);

    ros::Rate loop_rate(30);
    while (ros::ok()) {
        publishVacuumStatus(status_pub);

        ros::spinOnce();
        loop_rate.sleep();
    }

    ser.close();
    return 0;
}