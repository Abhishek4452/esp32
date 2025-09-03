#define button 22
#define led_PIN 12
int current;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(button,INPUT_PULLDOWN)//connect ledbutton pin to the high for turn ON led;
  pinMode(led_PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
current=digitalRead(button);
if (current == HIGH){
  Serial.println("high");
  digitalWrite(led_PIN,HIGH);
  delay(1000);
}
else{
  Serial.println("low");
  digitalWrite(led_PIN,LOW);
  delay(1000);
}

}
