int outputPin = 13;
int inputPin = A0;

/*
Circuit:

 -> OUTPUT
   -> 500 ohm resistor
      -> INPUT
      -> Sensor 
        -> Ground
   Input will be determined by the
   resistanse of the sensor
   v1 = 5v
   r1 = 500ohm resistor
   r2 = sensor
  
   the value we read:
   v2 = (r2/r1+r2)*v1
*/

void setup() 
{
  //We send a steady current from output to input
  pinMode(outputPin, OUTPUT);
  pinMode(inputPin, INPUT);
  //Send a steady current though outputPin
  digitalWrite(outputPin, HIGH); 
  Serial.begin(9600); 
}

void loop() 
{
  //Read value from input
  int input = analogRead(inputPin);
  //The input will be affected by the voltage-divider.
  Serial.println("Current read: " + (String)input);
  delay(1000);
}
