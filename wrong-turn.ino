
void setup() {

  pinMode(13, OUTPUT);
}
 
// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(600);       
  // 
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(200);    
  // 
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);       
  // 
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(500);    
  // 
}
