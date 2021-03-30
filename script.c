// Importer le package pour utiliser le servo moteur.
#include <Servo.h>

// définir toute les variables de base
int buttonState = 0;
const int bit_A = 2;
const int bit_B = 3;
const int bit_C = 4;
const int bit_D = 5;
const int bit_E = 6;
const int bit_F = 7;
const int bit_G = 8;

// définir le préfix du servo moteur.
Servo servo_9;

// construction lors de la première génération.
void setup()
{
  servo_9.attach(13, 500, 2500);
  pinMode(12, INPUT);
  pinMode(13, OUTPUT);
  pinMode(bit_A, OUTPUT);
  pinMode(bit_B, OUTPUT);
  pinMode(bit_C, OUTPUT);
  pinMode(bit_D, OUTPUT);
  pinMode(bit_E, OUTPUT);
  pinMode(bit_F, OUTPUT);
  pinMode(bit_G, OUTPUT);

}

// loop permet de répéter des actions à l'infini.
void loop()
{
  buttonState = digitalRead(12);
  // regarder si le button est pressé.
  if (buttonState == HIGH) {
    servo_9.write('0');
    afficher(1);
  } else {
    servo_9.write('180');
    afficher(0);
  }
}

// définir chaques leds de l'afficheur à 7 segments pour afficher les différents variables graphiquement.
void afficher(char chiffre)
{
    switch(chiffre)
    {
    case 0 :
        digitalWrite(bit_A, LOW);
        digitalWrite(bit_B, LOW);
        digitalWrite(bit_C, LOW);
        digitalWrite(bit_D, LOW);
      	digitalWrite(bit_E, LOW);
      	digitalWrite(bit_F, LOW);
      	digitalWrite(bit_G, HIGH);
        break;
    case 1 :
        digitalWrite(bit_A, HIGH);
        digitalWrite(bit_B, LOW);
        digitalWrite(bit_C, LOW);
        digitalWrite(bit_D, HIGH);
      	digitalWrite(bit_E, HIGH);
      	digitalWrite(bit_F, HIGH);
      	digitalWrite(bit_G, HIGH);
        break;
    case 2 :
        digitalWrite(bit_A, LOW);
        digitalWrite(bit_B, HIGH);
        digitalWrite(bit_C, LOW);
        digitalWrite(bit_D, LOW);
      	digitalWrite(bit_E, LOW);
      	digitalWrite(bit_F, LOW);
        break;
    case 3 :
        digitalWrite(bit_A, HIGH);
        digitalWrite(bit_B, HIGH);
        digitalWrite(bit_C, LOW);
        digitalWrite(bit_D, LOW);
        break;
    case 4 :
        digitalWrite(bit_A, LOW);
        digitalWrite(bit_B, LOW);
        digitalWrite(bit_C, HIGH);
        digitalWrite(bit_D, LOW);
        break;
    case 5 :
        digitalWrite(bit_A, HIGH);
        digitalWrite(bit_B, LOW);
        digitalWrite(bit_C, HIGH);
        digitalWrite(bit_D, LOW);
        break;
    case 6 :
        digitalWrite(bit_A, LOW);
        digitalWrite(bit_B, HIGH);
        digitalWrite(bit_C, HIGH);
        digitalWrite(bit_D, LOW);
        break;
    case 7 :
        digitalWrite(bit_A, HIGH);
        digitalWrite(bit_B, HIGH);
        digitalWrite(bit_C, HIGH);
        digitalWrite(bit_D, LOW);
        break;
    case 8 :
        digitalWrite(bit_A, LOW);
        digitalWrite(bit_B, LOW);
        digitalWrite(bit_C, LOW);
        digitalWrite(bit_D, HIGH);
        break;
    case 9 :
        digitalWrite(bit_A, HIGH);
        digitalWrite(bit_B, LOW);
        digitalWrite(bit_C, LOW);
        digitalWrite(bit_D, HIGH);
        break;
    }
}
