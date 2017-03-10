/*
	控制直流电机，以255作为中点，255以下正转，255以上反转
*/

byte pinout=5;
byte pinrefer=6;
byte i=0;
void setup()
{
	pinMode(pinout,OUTPUT);
	pinMode(pinrefer,OUTPUT);
	analogWrite(pinrefer,500);
}

void loop()
{
	i=i%1024;
	analogWrite(pinout,i<500?i:1023-i);
	i++;
	delay(1000);
}