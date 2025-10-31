#include <Arduino.h>

//definicion pines 

const int tringPin = 9;
const int echoPin = 10;
const int tringPin = 11;
const int echoPin = 6;



// variables 

long duracion;




void setup() {
  
  Serial.begin(9600); //comunicacion serial
  pinMode(tringPin, OUTPUT); //TRING COMO SALIDA 
  pinMode(echoPin, INPUT); //ECHO COMO ENTRADA 
  pinMode(tringPin, OUTPUT); //TRING COMO SALIDA 
  pinMode(echoPin, INPUT); //ECHO COMO ENTRADA 
 
}



void loop() {

  //enviar pulsos ultra sonicos

 digitalWrite(tringPin, LOW);
 delayMicroseconds(2);
 digitalWrite(tringPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(tringPin, LOW);

 //leer el tiempo de duracion de respuesta de pulsos 

 duracion = pulseIn(echoPin, HIGH);
}
 