#include "Wire.h"  // Inclure la bibliothèque Wire pour la communication I2C
#include "LiquidCrystal_I2C.h"  // Inclure la bibliothèque LiquidCrystal_I2C pour le LCD

// Créer un objet LCD avec l'adresse I2C 0x27 et un écran 16x2
LiquidCrystal_I2C LCD(0x27, 16, 2); 

void setup() {
   LCD.init(); // Initialiser le LCD
   LCD.backlight(); // Allumer le rétroéclairage du LCD

   // Positionner le curseur à la colonne 1, ligne 0 (première ligne) et afficher "HELLO"
   LCD.setCursor(1, 0);
   LCD.print("HELLO");
  
   // Positionner le curseur à la colonne 8, ligne 1 (deuxième ligne) et afficher "WORLD"
   LCD.setCursor(8, 1);
   LCD.print("WORLD");
}

void loop() {
   LCD.noDisplay(); // Éteindre l'affichage du LCD
   delay(1000); // Attendre pendant 1 seconde (1000 millisecondes)
   LCD.display(); // Allumer l'affichage du LCD
   delay(1000); // Attendre pendant 1 seconde
}
