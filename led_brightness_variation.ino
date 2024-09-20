/*
  Objectif: faire varier la luminosité d'une LED sur la broche 10 en modifiant la valeur PWM
*/


//***** EN-TETE DECLARATIVE *****

int ledPin = 10;    //On renomme la broche 10 en "ledPin"
int timer = 1000;   //On définit une durée de 0,1 seconde pour la variable timer

//***** SETUP  *****

void setup() {

pinMode(ledPin, OUTPUT);

}

//***** LOOP  *****

void loop() {

    // LED à 0%.    
    analogWrite(ledPin, 0); 
    delay(timer);
    
    // LED à 19.6%.    
    analogWrite(ledPin, 50); 
    delay(timer);
  
    // LED à 39.2%.    
    analogWrite(ledPin, 100); 
    delay(timer);
    
    // LED à 58.8%.    
    analogWrite(ledPin, 150); 
    delay(timer);
    
    // LED à 78.4%.    
    analogWrite(ledPin, 200); 
    delay(timer);
    
    // LED à 100%.    
    analogWrite(ledPin, 255); 
    delay(timer);
}


