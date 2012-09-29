int outputPin = 13;
int inputPin = A0;

void setup() 
{
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
  Serial.println("Current read: " + (String)input);
  delay(1000);
}
