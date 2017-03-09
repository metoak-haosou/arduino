
/* 
*串口控制彩灯
*
*/

byte red = A1;
byte green = A2;
byte blue = A3;
void setup()
{
	pinMode(red,OUTPUT);
	pinMode(green,OUTPUT);
	pinMode(blue,OUTPUT);
	Serial.begin(9600);
	Serial.flush();
}

void loop()
{
	char ch,ledGet;
	int ledval = 0;
	byte ledSet;
	delay(100);
	if(Serial.available()>0){
		while(!isAlpha(ch = Serial.read()));
		ledGet=ch;
		while(isNum(ch = Serial.read())){
			ledval = ledval*10+ch-'0'; 
		}
		if(ledGet=='r' || ledGet=='R')
			ledSet=red;
		else if(ledGet=='g' || ledGet=='G')
			ledSet=green;
		else
			ledSet=blue;
		analogWrite(ledSet,ledval%255);
	}
}
boolean isAlpha(char ch)
{
	return (ch>='a' && ch<='z') || (ch>='A' && ch<='Z');
}
boolean isNum(char ch)
{
	return ch>='0' && ch<='9';
}