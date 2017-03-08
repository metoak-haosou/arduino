//按一下改变一次状态


int led = 13;
int btn = 12;
int current = LOW ; 
void setup()
{
	pinMode(led,OUTPUT);
	pinMode(btn,INPUT);
}

void loop()
{
	if(digitalRead(btn)){
		if(current == HIGH){
			current = LOW ;
			digitalWrite(led,current);
		}
		else{
			current = HIGH ;
			digitalWrite(led,current);
		}
	}
}
