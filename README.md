# vacuum_control

## Arduino吸盘控制代码烧录
1. 安装Arduino IDE
2. USB连接开发板至电脑
3. 工具-开发板-选择【Arduino Nano】
4. 工具-处理器-选择【ATmega328P】
5. 工具-端口-选择开发版插入的USB端口
6. 打开vacuum_control.ino，点击【上传】，完成后可看到上传成功提示

## ROS1吸盘控制
编译vacuum_control_ws中的vacuum_control包，其中有vacuum_status_pub 和 vacuum_status_pub_VR 2个节点
### vacuum_status_pub
```
sudo su
source devel/setup.bash
rosrun vacuum_control vacuum_status_pub
```
主要功能：
1. 发布吸盘状态至topic /vacuum_status， 数据类型为 sensor_msgs::JointState, 吸盘状态为position[0]，值0.0为释放，值1.0为吸取；
2. 接受来自 topic /vacuum_cmd 的控制指令，数据类型为 sensor_msgs::JointState, 吸盘状态为position[0]，值0.0为释放，值1.0为吸取；
3. 连接usb串口并下发控制指令到arduino，默认串口为“/dev/ttyUSB0”, 如果运行时报找不到串口，则需要手动修改或切换插口（控制串口需要root）

### vacuum_status_pub_VR
```
sudo su
source devel/setup.bash
rosrun vacuum_control vacuum_status_pub_VR
```
主要功能：
与上面节点核心功能一致，附加监听/vr_pose消息的按键信号，可以通过VR手柄控制吸盘