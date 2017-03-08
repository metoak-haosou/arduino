//this file is used to get a blink led

#define DELAY 100

int led = 13;
int one = 1;
int i = 0;
void setup()
{
	pinMode(led,OUTPUT);
}

void loop()
{
	for(i = 0;i<3;i++){
		digitalWrite(led,HIGH);
		delay(2*DELAY);
		digitalWrite(led,LOW);
		delay(DELAY);
	};
	delay(5*DELAY);
	for(i=0;i<3;i++){
		digitalWrite(led,HIGH);
		delay(5*DELAY);
		digitalWrite(led,LOW);
		delay(DELAY);
	};
	delay(5*DELAY);
	for(i = 0;i<3;i++){
		digitalWrite(led,HIGH);
		delay(2*DELAY);
		digitalWrite(led,LOW);
		delay(DELAY);
	};
	delay(50*DELAY);
	
}
