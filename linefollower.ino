const int Sensor_L=8;
const int Sensor_R=7;

const int Motor_L_F=2;
const int Motor_L_B=3;
const int Motor_R_F=4;
const int Motor_R_B=5;
int L=0; 
int R=0;
int t=0;
void Forward() {
digitalWrite(Motor_L_F, HIGH);
digitalWrite(Motor_L_B, LOW);
digitalWrite(Motor_R_F, HIGH);
digitalWrite(Motor_R_B, LOW);
}

void Right() {
digitalWrite(Motor_L_F, HIGH);
digitalWrite(Motor_L_B, LOW);
digitalWrite(Motor_R_F, LOW);
digitalWrite(Motor_R_B, LOW);
}

void Left() {
digitalWrite(Motor_L_F, LOW);
digitalWrite(Motor_L_B, LOW);
digitalWrite(Motor_R_F, HIGH);
digitalWrite(Motor_R_B, LOW);
}

void Backward() {
digitalWrite(Motor_L_F, LOW);
digitalWrite(Motor_L_B, HIGH);
digitalWrite(Motor_R_F, LOW);
digitalWrite(Motor_R_B, HIGH);
}

void Stop() {
digitalWrite(Motor_L_F, LOW);
digitalWrite(Motor_L_B, LOW);
digitalWrite(Motor_R_F, LOW);
digitalWrite(Motor_R_B, LOW);
}

void setup() {
  // put your setup code here, to run once:
pinMode(Sensor_L, INPUT);
pinMode(Sensor_R, INPUT);
pinMode(Motor_L_F, OUTPUT);
pinMode(Motor_L_B, OUTPUT);
pinMode(Motor_R_F, OUTPUT);
pinMode(Motor_R_B, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 // Serial.begin(9600);
 // Serial.print(Sensor_L);
 // delay(1000);
 // Serial.print(Sensor_R);
 // delay(1000);
//
L=digitalRead(Sensor_L);
R=digitalRead(Sensor_R);
if(L==HIGH && R==HIGH)
{
  //void Forward();
  digitalWrite(Motor_L_F, HIGH);
  digitalWrite(Motor_L_B, LOW);
  digitalWrite(Motor_R_F, HIGH);
  digitalWrite(Motor_R_B, LOW);
  delay(t);
}
else if(L==LOW && R==HIGH)
{
  //void Right();
  digitalWrite(Motor_L_F, LOW);
  digitalWrite(Motor_L_B, LOW);
  digitalWrite(Motor_R_F, HIGH);
  digitalWrite(Motor_R_B, LOW);
  delay(t);
  
}
else if(L==HIGH && R==LOW)
{
 //void Left();
  digitalWrite(Motor_L_F, HIGH);
  digitalWrite(Motor_L_B, LOW);
  digitalWrite(Motor_R_F, LOW);
  digitalWrite(Motor_R_B, LOW);
  delay(t);
  
}
else if(L==LOW && R==LOW)
{
 //void Stop();
  digitalWrite(Motor_L_F, LOW);
  digitalWrite(Motor_L_B, LOW);
  digitalWrite(Motor_R_F, LOW);
  digitalWrite(Motor_R_B, LOW);
  delay(t);
}

}
