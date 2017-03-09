/*
*彩虹灯
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
}

void loop()
{
	byte i,j,k;
	for(i=0;i<255;i++)
		for(j=0;j<255;j++)
			for(k=0;k<255;k++){
				analogWrite(red,i);
				analogWrite(green,j);
				analogWrite(blue,k);
				delay(20);
			}
}