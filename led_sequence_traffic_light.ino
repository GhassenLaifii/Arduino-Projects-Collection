const int ledR = 13;

const int ledJ = 12;
const int ledV = 11;



void setup()       // début de la fonction setup()

{         
              

  pinMode(ledR, OUTPUT); 
  pinMode(ledJ, OUTPUT);
  pinMode(ledV, OUTPUT);   // Initialise la broche 13 comme sortie   
  Serial.begin(9600);     // Ouvre le port série à 9600 bauds
  
}         // fin de la fonction setup()


//***** FONCTION LOOP = Boucle sans fin = coeur du programme *****
// la fonction loop() s'exécute sans fin en boucle aussi longtemps que l'Arduino est sous tension


void loop()       // début de la fonction loop()

{

  digitalWrite(ledR, HIGH);     // Met la broche led1 au niveau haut = allume la LED
  delay(1000); 
  digitalWrite(ledR, LOW);      // Met la broche 13 au niveau bas = éteint la LED
  
  
                   // Pause de 500ms
  digitalWrite(ledJ, HIGH);      // Met la broche 13 au niveau bas = éteint la LED
  delay(500);                 // Pause 500ms
  digitalWrite(ledJ, LOW);      // Met la broche 13 au niveau bas = éteint la LED
   

  digitalWrite(ledV, HIGH);      // Met la broche 13 au niveau bas = éteint la LED
  delay(1000);                 // Pause 500ms
  digitalWrite(ledV, LOW);      // Met la broche 13 au niveau bas = éteint la LED
  
}         // fin de la fonction loop()


