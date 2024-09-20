#include "Ultrasonic.h"  // Inclure la bibliothèque Ultrasonic
Ultrasonic ultrasonic(9, 8); // Créer un objet Ultrasonic avec les pins 9 (Trig) et 8 (Echo)

void setup() {
  Serial.begin(9600); // Initialiser la communication série à 9600 bauds
}

void loop() {
  int dist = ultrasonic.Ranging(CM); // Mesurer la distance en centimètres
  Serial.print(dist); // Afficher la distance sur le moniteur série
  Serial.println(" cm"); // Ajouter " cm" à la valeur affichée

  delay(100); // Attendre 100 millisecondes avant de refaire une mesure
}
