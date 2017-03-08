//this file is used to get a blink led

#define DELAY 1000

int led[] = {10,11,12,13};
int inc = 0;
int one = 1;
int i = 0;
void setup()
{
	for(i=0;i<4;i++)
		pinMode(led[i],OUTPUT);
}

void loop()
{
	i = 0;
	while(i<4){
	if(inc & (one < i))
		digitalWrite(led[i],HIGH);
	else
		digitalWrite(led[i],LOW);
		i++;
	}
	inc++;
	delay(DELAY);
}
