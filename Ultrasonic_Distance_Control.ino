#include "Ultrasonic.h"  // Inclure la bibliothèque Ultrasonic
Ultrasonic ultrasonic(9, 8); // Créer un objet Ultrasonic avec les pins 9 (Trig) et 8 (Echo)

void setup() {
  Serial.begin(9600); // Initialiser la communication série à 9600 bauds
  pinMode(11, OUTPUT); // Configurer le pin 11 en mode sortie
  pinMode(12, OUTPUT); // Configurer le pin 12 en mode sortie
}

void loop() {
  int dist = ultrasonic.Ranging(CM); // Mesurer la distance en centimètres
  Serial.print(dist); // Afficher la distance sur le moniteur série
  Serial.println(" cm"); // Ajouter " cm" à la valeur affichée

  // Si la distance est inférieure à 50 cm
  if (dist < 50) {
    digitalWrite(12, LOW); // Éteindre le pin 12
    digitalWrite(11, HIGH); // Allumer le pin 11
  }

  // Si la distance est supérieure à 50 cm
  if (dist > 50) {
    digitalWrite(12, HIGH); // Allumer le pin 12
    digitalWrite(11, LOW); // Éteindre le pin 11
  }

  delay(100); // Attendre 100 millisecondes avant de refaire une mesure
}
