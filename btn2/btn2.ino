//按一下改变一次状态
//防止按键抖动

byte led = 13;
byte btn = 12;
boolean current = LOW ; 
void setup()
{
	pinMode(led,OUTPUT);
	pinMode(btn,INPUT);
}

void loop()
{
	if(digitalRead(btn)){
		delay(5);
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
}
