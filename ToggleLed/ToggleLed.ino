#define ledPin 8
#define buttonPin 7

int lastButtonState;
int ledState = LOW;
unsigned long lastTimeButtonStateChanged = millis();
unsigned long debounceDuration = 50;//millis
void setup() {
  // put your setup code here, to run once:
  
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(millis()-lastTimeButtonStateChanged >= debounceDuration)
  {
    int buttonState= digitalRead(buttonPin);
    if(buttonState != lastButtonState)
    {
      lastButtonState=buttonState;
      lastTimeButtonStateChanged= millis();
      
      if(buttonState == LOW)
      {
        if(ledState == HIGH)
        {
          ledState=LOW;
        }
        else
        {
          ledState = HIGH;
        }
        digitalWrite(ledPin, ledState);
      }

    }
  }

}
