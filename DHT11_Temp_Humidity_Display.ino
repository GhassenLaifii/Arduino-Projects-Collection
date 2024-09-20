/* 
  Objectif: Afficher la température et l’humidité sur un écran 
*/  
 
//***** EN-TETE DECLARATIVE ***** 
 
 
#include <dht.h> //on charge la bibliothèque 
 
dht DHT;  	//on crée l’objet du capteur DHT11  
#define DHT11_PIN 7 	//on définit le Pin qui sera utilisé pour recevoir les données 
 
void setup() 	 	// début de la fonction setup() 
{ 
  Serial.begin(9600); //Pour une fois, l’ouverture du port série et la définition de sa vitesse en bauds est utile, même indispensable puisque l’on va utiliser ce port pour afficher les valeurs du capteur. 
} 
 
//***** FONCTION LOOP = Code d'initialisation ***** 
// La fonction setup() est exécutée en premier et une seule fois, au démarrage du programme   
 
void loop()       // début de la fonction loop() 
{ 
  int chk = DHT.read11(DHT11_PIN); 	// on lit l’état du capteur 
  Serial.print("Temperature = "); 	//on écrit le mot Température sur le moniteur 
  Serial.println(DHT.temperature); 	//on affiche sur la même ligne la température lue 
  Serial.print("Humidite = "); //on écrit le mot Humidité sur le moniteur 
  Serial.println(DHT.humidity); 	//on affiche sur la même ligne l’humidité lue   
  delay(1000);  	//on fait une pause de 1 seconde entre 2 interrogations du capteur 
} 
