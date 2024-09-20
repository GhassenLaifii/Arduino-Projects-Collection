/*
 
  Objectif: Eteindre une LED dès que la luminosité est suffisante
*/


//***** EN-TETE DECLARATIVE *****


int lightPin = A0;   //On renomme la broche A0 en "lightPin"
int ledPin = 9;     //On renomme la broche 9 en "ledPin"


//***** FONCTION SETUP = Code d'initialisation *****
// La fonction setup() est exécutée en premier et une seule fois, au démarrage du programme


void setup()
{
  pinMode (ledPin, OUTPUT);
  Serial.begin(9600);
}


void loop()
{
  int a = analogRead (lightPin)
  Serial.print(a);
  delay(1000);
  int seuil = 900;                          //On définit un seuil de luminosité (sur 1023) à partir duquel la LED s'éteint
  if (analogRead (lightPin) > seuil)    //Si la luminosité est plus élevée que le seuil...
  {
    digitalWrite (ledPin, LOW);          //... alors on éteint la LED.
  }
  else                                  //Sinon...
  {
    digitalWrite (ledPin, HIGH);         //...on allume la LED
  }
}
  

