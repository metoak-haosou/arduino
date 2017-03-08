/*
*流水灯
*	
*/
#define DELAY 100

byte led[] = {4,5,6,7,8,9,10,11,12,13};
byte led_nr = sizeof(led)/sizeof(led[0]);
byte i = 0;
unsigned long lasttime;
void setup()
{
	for(i=0;i<led_nr;i++)
		pinMode(led[i],OUTPUT);
	lasttime = millis();
	i = 0;
}

void loop()
{
	if(millis()-lasttime>=DELAY){
		digitalWrite(led[i],HIGH);
		if(i!=0)
			digitalWrite(led[led_nr-1],LOW);
		else
			digitalWrite(led[i-1],LOW);
		i++;
		i%=led_nr;
		lasttime = millis();
	}
}
