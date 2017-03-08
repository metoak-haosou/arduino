/*
*流水灯
*延迟可控
*/

byte led[] = {4,5,6,7,8,9,10,11,12,13};
byte led_nr = sizeof(led)/sizeof(led[0]);
byte i = 0;
byte r_in = 2;
int delay_led; 
unsigned long lasttime;
void setup()
{
	for(i=0;i<led_nr;i++)
		pinMode(led[i],OUTPUT);
	pinMode(r_in,INPUT);
	lasttime = millis();
	i = 0;
}

void loop()
{
	delay_led = analogRead(r_in);
	if(millis()-lasttime>=delay_led){
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
