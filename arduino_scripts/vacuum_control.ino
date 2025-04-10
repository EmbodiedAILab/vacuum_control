// 吸盘通断控制，信号线接地状态（低电平）为吸取，高电平为释放
int controlPin = 3;  // 控制吸盘设备的 GPIO 引脚

void setup() {
  Serial.begin(9600);
  pinMode(controlPin, OUTPUT);
  digitalWrite(controlPin, HIGH);  // 初始状态为吸盘关闭
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    command.trim();

    if (command == "OFF") {
      digitalWrite(controlPin, HIGH);  // 关闭吸盘设备
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("吸盘已关闭");
    } else if (command == "ON") {
      digitalWrite(controlPin, LOW);   // 开启吸盘设备
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("吸盘已开启");
    } else {
      Serial.println("未知指令");
    }
  }
}
