//this file is used to get a blink led
#define DELAY 1000
int led1 = 13;
void setup() 
{
	pinMode(led1,OUTPUT);
}

void loop() 
{
	digitalWrite(led1,HIGH);
	delay(DELAY);
	digitalWrite(led1,LOW);
	delay(DELAY);
}
 