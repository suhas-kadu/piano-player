int button1 = 2;
int button2 = 3;
int button3 = 4;
int button4 = 5;
int button5 = 6;
int button6 = 7;
int button7 = 8;
int button8 = 9;

int buzzer = 10;


void setup()
{
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);
  pinMode(button5, INPUT);
  pinMode(button6, INPUT);
  pinMode(button7, INPUT);
  pinMode(button8, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  int b1State = digitalRead(button1);
  int b2State = digitalRead(button2);
  int b3State = digitalRead(button3);
  int b4State = digitalRead(button4);
  int b5State = digitalRead(button5);
  int b6State = digitalRead(button6);
  int b7State = digitalRead(button7);
  int b8State = digitalRead(button8);


  if(b1State == 1) {
    tone(buzzer,240,100);
  }  if(b2State == 1) {
    tone(buzzer,270,105);
  }  if(b3State == 1) {
    tone(buzzer,300,110);
  }  if(b4State == 1) {
    tone(buzzer,337.5,115);
  }  if(b5State == 1) {
    tone(buzzer,360,120);
  }  if(b6State == 1) {
    tone(buzzer,400,125);
  }  if(b7State == 1) {
    tone(buzzer,450,130);
  }  if(b8State == 1) {
    tone(buzzer,480,200);
  }


  delay(10);
}