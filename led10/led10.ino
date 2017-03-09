/*
*随机幻彩灯
*
*/

byte red = A1;
byte green = A2;
byte blue = A3;
int seed = 0;
void setup()
{
	pinMode(red,OUTPUT);
	pinMode(green,OUTPUT);
	pinMode(blue,OUTPUT);
}

void loop()
{
	randomSeed(seed);
	analogWrite(red,seed%255);
	seed = random(seed);
	analogWrite(green,seed%255);
	seed = random(seed);
	analogWrite(blue,seed%255);
	seed=seed%4096;
	delay(20);
}