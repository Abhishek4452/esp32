
// control the led using button

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
// learning -- don't connect the esp-32 pin35  is only an input pin not a output pin
//On the ESP32-WROOM microcontroller, four pins are input-only: GPIO34, GPIO35, GPIO36, and GPIO39. 
//These pins cannot be used as outputs, so they are suited only for tasks such as reading sensors or buttons.