

int buzzer = 6;
int Redled = 2;
int Greenled = 3;
int ldr = A0;

int lightValue = 0;
int threshold = 500; 

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(Redled, OUTPUT);
  pinMode(Greenled, OUTPUT);
  
  Serial.begin(9600); 
}

void loop() {
  lightValue = analogRead(ldr);

  Serial.println(lightValue); 

  if (lightValue < threshold) {
   
    digitalWrite(Redled,HIGH);   
    digitalWrite(Greenled, LOW);   
    digitalWrite(buzzer, HIGH); 
  } 
  else {
   
    digitalWrite(Redled, LOW);   
    digitalWrite(Greenled, HIGH);   
    digitalWrite(buzzer, LOW); }

  delay(200);
}
