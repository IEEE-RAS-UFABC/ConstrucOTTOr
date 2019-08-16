
bool verificaObstaculo(){
  if (sensor.distance()<5){
    return true;
  }
  else{
    return false;
  }
}

void tocaBuzzer(){
  int seno=(sin(3.1416/180));
  //gera uma frequência a partir do valor do seno
  int frequencia = 200+(int(seno*10));
  tone(6,frequencia);
}

void paraBuzzer(){
 noTone(6);
}

