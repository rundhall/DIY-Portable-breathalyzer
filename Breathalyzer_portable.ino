/*
  created by: Rundhall
  version:1.0.1
  
  Measured parameters:
  Ethanol level

  controlled unit:
  8 LEDs

  communication:
  serial port
*/
#define LED8_PIN 9
#define LED7_PIN 8
#define LED6_PIN 7
#define LED5_PIN 6
#define LED4_PIN 5
#define LED3_PIN 4
#define LED2_PIN 3
#define LED1_PIN 2

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
    pinMode(LED1_PIN, OUTPUT);
  digitalWrite(LED1_PIN, LOW);  
      pinMode(LED2_PIN, OUTPUT);
  digitalWrite(LED2_PIN, LOW);  
      pinMode(LED3_PIN, OUTPUT);
  digitalWrite(LED3_PIN, LOW);  
      pinMode(LED4_PIN, OUTPUT);
  digitalWrite(LED4_PIN, LOW);  
      pinMode(LED5_PIN, OUTPUT);
  digitalWrite(LED5_PIN, LOW);  
      pinMode(LED6_PIN, OUTPUT);
  digitalWrite(LED6_PIN, LOW);  
      pinMode(LED7_PIN, OUTPUT);
  digitalWrite(LED7_PIN, LOW);  
      pinMode(LED8_PIN, OUTPUT);
  digitalWrite(LED8_PIN, LOW);  
  for(int i =2;i<10;i++)
  {
    digitalWrite(i, HIGH);
    delay(100); 
  }
  for(int i =10;i>1;i--)
  {
    digitalWrite(i, LOW);
    delay(100); 
  }  
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.print(sensorValue);
  Serial.print(";");
  Serial.println(voltage);

   if (sensorValue > 75) 
      digitalWrite(2, HIGH);
   else
      digitalWrite(2, LOW);
   
   if (sensorValue > 150) 
      digitalWrite(3, HIGH);
   else
      digitalWrite(3, LOW);
    
    if (sensorValue > 225)  
      digitalWrite(4, HIGH);
   else
      digitalWrite(4, LOW);
      
    if (sensorValue > 300)  
      digitalWrite(5, HIGH);
   else
      digitalWrite(5, LOW);

     if (sensorValue > 375)  
      digitalWrite(6, HIGH);
   else
      digitalWrite(6, LOW);
     
    if (sensorValue > 450)  
      digitalWrite(7, HIGH);
   else
      digitalWrite(7, LOW);

   if (sensorValue > 525)  
      digitalWrite(8, HIGH);
   else
      digitalWrite(8, LOW);

  if (sensorValue > 600)  
      digitalWrite(9, HIGH);
   else
      digitalWrite(9, LOW);
   
}
