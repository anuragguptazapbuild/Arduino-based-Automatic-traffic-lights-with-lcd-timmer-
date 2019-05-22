const int redledPin1=7;
const int yellowledPin1=4;
const int greenledPin1=2;
const int redledPin2=13;
const int yellowledPin2=12;
const int greenledPin2=8;

const int redledPin3=11;
const int yellowledPin3=10;
const int greenledPin3=9;

const int redledPin4=6;
const int yellowledPin4=5;
const int greenledPin4=3;
const int redDelay=10000;
const int yellowDelay=2000;
const int greenDelay=5000;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redledPin1,OUTPUT);
pinMode(yellowledPin1,OUTPUT);
pinMode(greenledPin1,OUTPUT);
pinMode(redledPin2,OUTPUT);
pinMode(yellowledPin2,OUTPUT);
pinMode(greenledPin2,OUTPUT);
pinMode(redledPin3,OUTPUT);
pinMode(yellowledPin3,OUTPUT);
pinMode(greenledPin3,OUTPUT);
pinMode(redledPin4,OUTPUT);
pinMode(yellowledPin4,OUTPUT);
pinMode(greenledPin4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenledPin2,HIGH);
digitalWrite(redledPin1,HIGH);
digitalWrite(redledPin3,HIGH);
digitalWrite(redledPin4,HIGH);
Serial.println("1st green light time remaining");
for(int i=5;i>=0;i--)
{
  delay(1000);
  Serial.println(i);
}
digitalWrite(greenledPin2,LOW);


digitalWrite(yellowledPin2,HIGH);

delay(yellowDelay);
digitalWrite(yellowledPin2,LOW);
digitalWrite(redledPin3,LOW);
digitalWrite(redledPin4,LOW);
digitalWrite(redledPin1,LOW);


digitalWrite(redledPin3,HIGH);
digitalWrite(redledPin4,HIGH);
digitalWrite(redledPin2,HIGH);
digitalWrite(greenledPin1,HIGH);
Serial.println("2nd green light time remaining");
for(int i=5;i>=0;i--)
{
  delay(1000);
   Serial.println(i);
}

digitalWrite(greenledPin1,LOW);


digitalWrite(yellowledPin1,HIGH);

delay(yellowDelay);
digitalWrite(yellowledPin1,LOW);
digitalWrite(redledPin2,LOW);
digitalWrite(redledPin3,LOW);
digitalWrite(redledPin4,LOW);



  digitalWrite(greenledPin3,HIGH);
digitalWrite(redledPin1,HIGH);
digitalWrite(redledPin2,HIGH);
digitalWrite(redledPin4,HIGH);
Serial.println("3rd green light time remaining");
for(int i=5;i>=0;i--)
{
  delay(1000);
  Serial.println(i);
}
digitalWrite(greenledPin3,LOW);


digitalWrite(yellowledPin3,HIGH);

delay(yellowDelay);

digitalWrite(yellowledPin3,LOW);
digitalWrite(redledPin2,LOW);
digitalWrite(redledPin4,LOW);
digitalWrite(redledPin1,LOW);




digitalWrite(redledPin3,HIGH);
digitalWrite(redledPin1,HIGH);
digitalWrite(redledPin2,HIGH);
digitalWrite(greenledPin4,HIGH);
Serial.println("4th green light time remaining");
for(int i=5;i>=0;i--)
{
  delay(1000);
  Serial.println(i);
}

digitalWrite(greenledPin4,LOW);



digitalWrite(yellowledPin4,HIGH);

delay(yellowDelay);

digitalWrite(yellowledPin4,LOW);
digitalWrite(redledPin2,LOW);
digitalWrite(redledPin3,LOW);
digitalWrite(redledPin1,LOW);


}
