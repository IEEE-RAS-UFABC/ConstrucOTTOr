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
