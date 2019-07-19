#include <Servo.h>

Servo quadrildireito;
Servo quadrilesquerdo;
Servo pedireito;
Servo peesquerdo;

#define pin_quadril_direito 3
#define pin_quadril_esquerdo 5
#define pin_pe_direito 10
#define pin_pe_esquerdo 11

void setup() {
  // put your setup code here, to run once:
 quadrildireito.attach(pin_quadril_direito);
 quadrilesquerdo.attach(pin_quadril_esquerdo);
 pedireito.attach(pin_pe_direito);
 peesquerdo.attach(pin_pe_esquerdo);

}

void loop() {
  andadinha();
  plie();
}

void giro (int angulo){
quadrildireito.write(angulo);
quadrilesquerdo.write(angulo);
pedireito.write(angulo);
peesquerdo.write(angulo);
}

void pedireitocima (){
  quadrildireito.write(90);
  quadrilesquerdo.write(90);
  pedireito.write(135);
}
void pedireitobaixo (){
  quadrildireito.write(90);
  quadrilesquerdo.write(90);
  pedireito.write(90);
}

void peesquerdobaixo (){
  quadrildireito.write(90);
  quadrilesquerdo.write(90);
  peesquerdo.write(90);
}

void peesquerdocima (){
  quadrildireito.write(90);
  quadrilesquerdo.write(90);
  peesquerdo.write(55);
}

void andadinha (){
  giro(90);
delay(1000);
pedireitocima();
delay(1000);
peesquerdocima();
delay(1000);
pedireitobaixo();
delay(1000);
peesquerdobaixo();
}

void pliet(){
  giro(90);
  delay(1000);
  pedireitocima();
  peesquerdocima();
  delay(1000);
}

