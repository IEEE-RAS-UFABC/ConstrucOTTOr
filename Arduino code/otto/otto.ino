#include <Servo.h>

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

}
//Funções ativas!
void loop() {
andadinha();
}
//Teste dos servos e função para rotação de TODOS os motores simultaneamente.
void giro (int angulo) {
  quadrildireito.write(angulo);
  quadrilesquerdo.write(angulo);
  pedireito.write(angulo);
  peesquerdo.write(angulo);
}
//Funções básicas para o pé direito.
void pedireitocima () {
  quadrildireito.write(90);
  quadrilesquerdo.write(90);
  pedireito.write(55);
}
void pedireitobaixo () {
  quadrildireito.write(90);
  quadrilesquerdo.write(90);
  pedireito.write(90);
}
//Funções básicas pé esquerdo.
void peesquerdocima () {
  quadrildireito.write(90);
  quadrilesquerdo.write(90);
  peesquerdo.write(135);
}
void peesquerdobaixo () {
  quadrildireito.write(90);
  quadrilesquerdo.write(90);
  peesquerdo.write(90);
}

//Dancinhas
void andadinha () {
giro(90);
delay(1000);
quadrildireito.write(55);
pedireito.write(135);
delay(1000);
pedireito.write(90);
delay(1000);
quadrilesquerdo.write(90);
peesquerdo.write(55);
delay(1000);
peesquerdo.write(90);
}

void pliet() {
  giro(90);
  delay(1000);
  pedireitocima();
  peesquerdocima();
  delay(1000);
}
