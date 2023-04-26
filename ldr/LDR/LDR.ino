const int analogInPin=A0;
const int analogOutPin=9;

int LED;

void setup() {
  
  Serial.begin(9600);
  pinMode(analogOutPin,OUTPUT);

}

void loop() {
  int LDR=analogRead(analogInPin);
  if (LDR<822) {
    digitalWrite(analogOutPin,HIGH);
    LED=1;
  }
  else if (LDR>822) {
    digitalWrite(analogOutPin,LOW);
    LED=0;
  }
  
   LDR=analogRead(analogInPin);
   int ledStatus=analogRead(analogOutPin);
  
Serial.print("LDR value:");
Serial.print(LDR);
Serial.print(" ,LED Status:");
Serial.print(LED);
Serial.println();

  delay(500);

}
