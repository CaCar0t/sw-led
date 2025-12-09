#include <Arduino.h>

// กำหนดพินสำหรับ VR
const int analogPin = A0;

void setup() {

// เริ่มต้น Serial Monitor เพื่อแสดงผล
  Serial.begin(115200);
  delay (1000); // รอการเชื่อมต่อ
  Serial.println("Starting VR Analog Read... ");
}
void loop() {
  // อ่านค่าอนาล็อกจาก VR
  int vrValue = analogRead(analogPin);
  // แปลงค่าที่อ่านได้เป็นเปอร์เซ็นต์
  int percentage = map(vrValue, 0, 1023, 0, 100);

  // แสดงค่าที่อ่านได้และค่าเปอร์เซ็นต์
  Serial.print("VR Value: ");
  Serial.print(vrValue);
  Serial.print(" (");
  Serial.print(percentage);
  Serial.println("%)");

  delay(500); // อ่านค่าทุก ๆ 500 ms
}