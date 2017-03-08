//this file is used to get a blink led


int led = 13;
int btn = 12;
void setup()
{
	pinMode(led,OUTPUT);
	pinMode(btn,INPUT);
}

void loop()
{
	digitalWrite(led,digitalRead(btn));
}
