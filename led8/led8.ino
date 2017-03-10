/*
*呼吸灯，利用正弦函数
*
*/

byte led = 3;
float sinval;
int ledval;
int i;
void setup()
{
	pinMode(led,OUTPUT);
}

void loop()
{
	for(i=0;i<180;i++){
		sinval=sin(i*(3.1415/180));
		ledval=sinval*255;
		analogWrite(led,ledval);
		delay(30);
	}
	delay(30);
}