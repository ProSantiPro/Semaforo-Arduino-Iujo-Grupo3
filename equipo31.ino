// C++ code
//
const int pinGrupoA_1 = 5;
const int pinGrupoA_2 = 6;
const int pinGrupoA_3 = 7;
const int pinGrupoB_1 = 4;
const int pinGrupoB_2 = 3;
const int pinGrupoC_1 = 10;
const int pinGrupoC_2 = 9;
const int pinGrupoD_1 = 11;
const int pinGrupoD_2 = 12;
const int pinGrupoD_3 = 13;

void setup()
{
  // Ampliado hasta el pin 13 para incluir los pines 12 y 13 que estás utilizando
  for (int i = 2; i <= 13; i++){
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  // FASE 1
  digitalWrite(pinGrupoA_1, LOW);
  digitalWrite(pinGrupoA_2, LOW);
  digitalWrite(pinGrupoA_3, HIGH);
  digitalWrite(pinGrupoB_1, LOW);
  digitalWrite(pinGrupoB_2, HIGH);
  digitalWrite(pinGrupoC_1, HIGH);
  digitalWrite(pinGrupoC_2, LOW);
  digitalWrite(pinGrupoD_1, HIGH);
  digitalWrite(pinGrupoD_2, LOW);
  digitalWrite(pinGrupoD_3, LOW);
  
  delay(5000);
}