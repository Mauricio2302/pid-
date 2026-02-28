#include <DIYcolorsensor.h>
ColorSensor sensor(8, 7, 6, A4);
ColorSensor sensor2(4, 3, 2, A5);
ColorSensor sensor3(A0, 13, 12, A6);
ColorSensor sensor4(A1, A2, A3, A7);
#define IN1 5
#define IN2 9
#define IN3 10
#define IN4 11
int colorR;
int colorRM;
int colorLM;
int colorL;
int P;
int Kp = 80;
int error;
void setup() {
  // put your setup code here, to run once:
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  Serial.begin(9600);
  calibrationd();
}

void loop() {
  // put your main code here, to run repeatedly:

  followLine();
}

void forward(int speed){
  analogWrite(IN1, speed);
  analogWrite(IN2, 0);
  analogWrite(IN3, speed);
  analogWrite(IN4, 0);
}
void backward(int speed){
  analogWrite(IN1, 0);
  analogWrite(IN2, speed);
  analogWrite(IN3, 0);
  analogWrite(IN4, speed);
}
void readColors(){
  sensor.getColor();
  sensor2.getColor();
  sensor3.getColor();
  sensor4.getColor();
  //direita = 1 direitaMeio = 2 esquerdaMeio = 3 esquerda = 4
}
void readLine(){
  readColors();
  Serial.print(getLine());
  String linha = getLine();
  if (linha == "6666") {
    error = 0;
  }
  else if (linha == "1111") {
    error = 0;
  }
  else if (linha == "6116") {
    error = 0;
  }
  else if (linha == "6611") {
    error = 1.25;
  }
  else if (linha == "6111") {
    error = 1.25;
  }
  else if (linha == "6616") {
    error = 0;
  }
  else if (linha == "6661") {
    error = 1.5;
  }
  else if (linha == "1166") {
    error = -1.25;
  }
  else if (linha == "6166") {
    error = 0;
  }
  else if (linha == "1116") {
    error = -1.25;
  }
  else if (linha == "1666") {
    error = -1.5;
  }
}
String getLine() {
  colorR = sensor.getColor();
  colorRM = sensor2.getColor();
  colorLM = sensor3.getColor();
  colorL = sensor4.getColor();
  String line = String(colorR) + String(colorRM) + String(colorLM) + String(colorL);
  return line;
}
void followLine(){
  readLine();
  P = Kp * error;
  if(error > 0){
    analogWrite(IN1, P);
    analogWrite(IN2, 0);
    analogWrite(IN3, 0);
    analogWrite(IN4, P);
    readLine();
  }
  else if(error < 0){
    analogWrite(IN1, 0);
    analogWrite(IN2, P);
    analogWrite(IN3, P);
    analogWrite(IN4, 0);
    readLine();
  }
  else{
    analogWrite(IN1, 100);
    analogWrite(IN2, 0);
    analogWrite(IN3, 100);
    analogWrite(IN4, 0);
    readLine();
  }

}
