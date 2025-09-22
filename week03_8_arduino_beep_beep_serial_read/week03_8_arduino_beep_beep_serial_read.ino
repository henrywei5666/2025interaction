//week03_8_arduino_beep_beep_serial_read
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //設定USB傳輸速度
  pinMode(8, OUTPUT); // 8 叭 要會發聲
}
int beep = 1; //一開始會 beep 嗶嗶叫
void serialEvent(){
  while(Serial.available()){
    char now = Serial.read();
    if(now==' ') beep = 0; //空白字母,不叫
    if(now=='b') beep = 1; //字母'b',要叫
  }
}
void loop() {
  if(beep==1){ //一開始,會倒數計時
    tone(8,800,200);
    delay(1000);
  }
}
