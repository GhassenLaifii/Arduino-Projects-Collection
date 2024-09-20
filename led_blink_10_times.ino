/*
Objectif: faire clignoter 10 fois la LED montée sur le port 13
*/

//***** EN-TETE DECLARATIVE *****
// On déclare les variables, les constantes...

byte compteur;      //On définit la variable "compteur" 
const int led1= 13;     //On renomme la broche 10 en "led1"
    

//***** FONCTION SETUP = Code d'initialisation *****
// La fonction setup() est exécutée en premier et une seule fois, au démarrage du programme

void setup() 

{                
  pinMode(led1, OUTPUT);    // Initialise la broche 13 comme sortie   
  
  Serial.begin(9600);     // Ouvre le port série à 9600 bauds
  
// Exécute le programme entre accolades en partant de zéro et en incrémentant à chaque fois la valeur de +1: 0+1/2+1/3+1... jusqu’à ce que la variable “compteur“ soit égale à 9 (plus petit que 10).  

for(compteur=0 ; compteur<10 ; compteur++) 

  {        // début du programme exécuté 10 fois
    digitalWrite(led1, HIGH); // allume la LED
    delay(500);               // attend 500ms
    digitalWrite(led1, LOW);  // éteint la LED
    delay(500);               // attend 500ms
  }
}       // fin du programme exécuté 10 fois

void loop() {      
}       // vide, car programme déjà exécuté dans setup


