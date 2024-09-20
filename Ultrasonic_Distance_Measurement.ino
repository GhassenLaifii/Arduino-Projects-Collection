int trigPin = 9;    // Pin TRIG
int echoPin = 8;    // Pin ECHO

float duration_us, distance_cm;

void setup() {
  // Initialiser le port série
  Serial.begin(9600);

  // Configurer le pin de déclenchement en mode sortie
  pinMode(trigPin, OUTPUT);
  // Configurer le pin d'écho en mode entrée
  pinMode(echoPin, INPUT);
}

void loop() {
  // Générer une impulsion de 10 microsecondes sur le pin TRIG
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Mesurer la durée de l'impulsion depuis le pin ECHO
  duration_us = pulseIn(echoPin, HIGH);

  // Calculer la distance
  distance_cm = 0.017 * duration_us;

  // Afficher la valeur sur le moniteur série
  Serial.print("distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  // Attendre 500 millisecondes avant de refaire une mesure
  delay(500);
}
