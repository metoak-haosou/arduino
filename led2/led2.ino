//this file is used to get a blink led

#define DELAY 1000

int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int inc = 0;
int one = 1;
void setup()
{
	pinMode(led1,OUTPUT);
	pinMode(led2,OUTPUT);
	pinMode(led3,OUTPUT);
	pinMode(led4,OUTPUT);
}

void loop()
{
	if(inc & (one < 0))
		digitalWrite(led1,HIGH);
	else
		digitalWrite(led1,LOW);
	if(inc & (one < 1))
		digitalWrite(led2,HIGH);
	else
		digitalWrite(led2,LOW);
	if(inc & (one < 2))
		digitalWrite(led3,HIGH);
	else
		digitalWrite(led3,LOW);
	if(inc & (one < 3))
		digitalWrite(led4,HIGH);
	else
		digitalWrite(led4,LOW);
	inc++;
	delay(DELAY);
}
