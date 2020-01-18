/* Mit diesem Programm kann man folgendes machen:
 * - Klavier spielen
 * - Sehen welche Töne man gespielt hat (C, D, E, F, G, A, H)
 * - Ausgabe beim Bildschirm löschen
 * Autor: Alexandra Fiechter
 * Datum: 13.12.2019
 */
// import
#include <LiquidCrystal.h>

// Konstante
const int buzzer = 9;   // Buzzer

// LCD
int lcdVEE = 8;         // Pin für LCD-Pin Vee (Kontrastwert)
int lcdRS = 7;          // Pin für LCD-Pin RS  (Register Select)
int lcdE = 6;           // Pin für LCD-Pin E   (Enable)
int lcdD4 = 5;          // Pin für LCD-Pin D4  (Datenbit 4)
int lcdD5 = 4;          // Pin für LCD-Pin D5  (Datenbit 5)
int lcdD6 = 3;          // Pin für LCD-Pin D6  (Datenbit 6)
int lcdD7 = 2;          // Pin für LCD-Pin D7  (Datenbit 7)
LiquidCrystal lcd(lcdRS, lcdE, lcdD4, lcdD5, lcdD6, lcdD7);

// Buttons
const int buttonC = 13; // Note C
const int buttonD = 12; // Note D
const int buttonE = 11; // Note E
const int buttonF = 10; // Note F
const int buttonG = A2; // Note G
const int buttonA = A3; // Note A
const int buttonH = A4; // Note H
const int resetB = A5;  // Reset Button

// Variable
int stateC = 0;
int stateD = 0;
int stateE = 0;
int stateF = 0;
int stateG = 0;
int stateA = 0;
int stateH = 0;
int stateResetB = 0;

void setup() {
  // LCD
  analogWrite(lcdVEE, 125); // Kontrast des Bildschirms
  lcd.begin(16, 2);         // Grösse des Disyplays
  lcd.setCursor(0, 0);
  lcd.print("");      

  // Buttons
  pinMode(buttonC, INPUT);
  pinMode(buttonD, INPUT);
  pinMode(buttonE, INPUT);
  pinMode(buttonF, INPUT);
  pinMode(buttonG, INPUT);
  pinMode(buttonA, INPUT);
  pinMode(buttonH, INPUT);
  pinMode(resetB, INPUT);
  pinMode(buzzer, OUTPUT);
}

// Ton ausgeben und Note notieren 
void buzzerAndLCD(char letter, int note) {
  tone(buzzer, note, 200);
  delay(500);
  noTone(buzzer);
  lcd.print(letter);
  delay(1000);
}

void loop() {
  // Stauts der Buttons
  stateC = digitalRead(buttonC);
  stateD = digitalRead(buttonD);
  stateE = digitalRead(buttonE);
  stateF = digitalRead(buttonF);
  stateG = digitalRead(buttonG);
  stateA = digitalRead(buttonA);
  stateH = digitalRead(buttonH);
  stateResetB = digitalRead(resetB);
  
  // schauen, welcher Button geklickt wurde
  if (stateC == HIGH) {
    buzzerAndLCD('C', 262);
  } else if (stateD == HIGH) {
    buzzerAndLCD('D', 294);
  } else if (stateE == HIGH) {
    buzzerAndLCD('E', 330);
  } else if (stateF == HIGH) {
    buzzerAndLCD('F', 349);
  } else if (stateG == HIGH) {
    buzzerAndLCD('G', 392);
  } else if (stateA == HIGH) {
    buzzerAndLCD('A', 440);
  } else if (stateH == HIGH) {
    buzzerAndLCD('H', 494);
  } else if (stateResetB == HIGH) {
    // Löschen des Displays
    lcd.clear();
  }
}
