#include <Ultrasonic.h>

#include <Servo.h>

HC_SR04 sensor(12,13); // (trigger, echo)

Servo quadrildireito; //Quadril direito se refere ao servo 4.
Servo quadrilesquerdo; //Quadril esquerdo se refere ao servo 2.
Servo pedireito; //Pé direito se refere ao servo 3.
Servo peesquerdo;//Pé esquerdo se refere ao servo 1.

//Definido as entradas dos servos.
#define pin_quadril_direito 2 
#define pin_quadril_esquerdo 3
#define pin_pe_direito 4
#define pin_pe_esquerdo 5

void setup() {
  // Funções que serão rodadas apenas uma vez (aqui se inserem as funções báscias)
  quadrildireito.attach(pin_quadril_direito);
  quadrilesquerdo.attach(pin_quadril_esquerdo);
  pedireito.attach(pin_pe_direito);
  peesquerdo.attach(pin_pe_esquerdo);
  Serial.begin(9600);
  pinMode(6, OUTPUT);

}
//Funções ativas!
void loop() {
if(verificaObstaculo()== true){
  tocaBuzzer();
  Serial.println("Obstáculo");
}
else{
  Serial.println("Vazio");
  paraBuzzer();
}
}




