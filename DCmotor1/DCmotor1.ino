/*
	����ֱ���������255��Ϊ�е㣬255������ת��255���Ϸ�ת
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