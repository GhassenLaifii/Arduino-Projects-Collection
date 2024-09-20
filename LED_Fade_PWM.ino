/*
  Objectif: faire varier la luminosité d'une LED sur la broche 10
  Adapté de David A. Mellis et Tom Igoe
*/


//***** EN-TETE DECLARATIVE *****

int ledPin = 10;    //On renomme la broche 10 en "ledPin"

//***** SETUP *****

void setup() {

}

//***** LOOP *****

void loop() {

  // Variation du min au max par addition de 5 jusqu'à 256

  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3)
  { 
    // Définition de la valeur de luminosité (de 0 à 255) 
    analogWrite(ledPin, fadeValue);
 
    // Attente de 30 millisecondes entre chaque palier pour voir l'effet.    
    delay(30);
  }

  // Variation du max au min par soustraction de 5 depuis 256

  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) 
  {
    // Définition de la valeur de luminosité (de 0 à 255) 
    analogWrite(ledPin, fadeValue);

    // Attente de 30 millisecondes entre chaque palier pour voir l'effet.    
    delay(30);
  }

}   

