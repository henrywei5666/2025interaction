// week10_5_arduino_serial_joystick_to_processing
// 修改自 week10_4_arduino_serial_monitor_joystick_Serial_println
// 但是不使用 Serial.println() 要改用 serial.write() 0-1023 vs. 0-255 差了4倍
void setup() { 
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(8,OUTPUT);
}

void loop() { 
  delay(30); // 小心, 要除以4, 才能順利由 Serial.write() 送出
  int now = analogRead(A3) / 4;
  Serial.write(now); //把 0-255 的數值送出去
  if(now > 200) tone(8,784,100); // 發出 784 的 So
  if(now < 50) tone(8,523,100); // 發出 523 的 Do
}
