int led = D7;  

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);   

  String temp1 = String(random(60, 80));
  Particle.publish("temp", temp1, PRIVATE);
  delay(30000);               

  digitalWrite(led, LOW);    
  delay(30000);               
}