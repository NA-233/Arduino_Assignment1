int startValue = 5;
int ledPin = 13;

void setup(){
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

  Serial.println("===Smart Countdown Starting===");

    while(startValue >= 1) {
      Serial.print("count: ");
      Serial.println(startValue);

      flashLED(startValue);

      delay(1000);

      startValue--;
    }
   Serial.println("=== Countdown Complete ===");
}

   void loop(){
    //Empty - everything happens once in setup()
   }

   void flashLED(int times) {
    int count = 0;

    while(count < times) {
      digitalWrite(ledPin, HIGH);
      delay(200);

      digitalWrite(ledPin, LOW);
      delay(200);

      count++;

  
    }
   }




