/* Dieses Programm lässt 12 LED-Pins in verschiedenen Mustern aufleuchten.
 * Autor: Alexandra Fiechter
 * Datum: 08.11.2019
 */

 // LED
int Red = 12;
int Green = 11;
int Blue = 10;
int Red2 = 9;

int Green2 = 8;
int Blue2 = 7;
int Red3 = 6;
int Green3 = 5;

int Blue3 = A1;
int Red4 = A2;
int Green4 = A3;
int Blue4 = A4;

int Del1 = 75;
int Del2 = 100;
int Del3 = 150;
int Del4 = 200;
int Del5 = 75;

void setup()
{
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);
  pinMode(Red2, OUTPUT);

  pinMode(Green2, OUTPUT);
  pinMode(Blue2, OUTPUT);
  pinMode(Red3, OUTPUT);
  pinMode(Green3, OUTPUT);

  pinMode(Blue3, OUTPUT);
  pinMode(Red4, OUTPUT);
  pinMode(Green4, OUTPUT);
  pinMode(Blue4, OUTPUT);
}

void loop()
{
  // Muster 1
  //Red
  digitalWrite(Red, HIGH);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del1);

  //Green
  digitalWrite(Red, LOW);
  digitalWrite(Green, HIGH);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del1);

  //Blue
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, HIGH);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del1);

  //Red2
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, HIGH);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del1);

  //Green2
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, HIGH);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del1);

  //Blue2
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, HIGH);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del1);

  //Red3
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, HIGH);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del1);

  //Green3
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, HIGH);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del1);

  //Blue3
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, HIGH);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del1);

  //Red4
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, HIGH);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del1);

  //Green4
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, HIGH);
  digitalWrite(Blue4, LOW);
  delay(Del1);

  //Blue4
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, HIGH);
  delay(Del1);

  // Muster 2
  //Red + Blue4
  digitalWrite(Red, HIGH);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, HIGH);
  delay(Del2);

  //Green + Green4
  digitalWrite(Red, LOW);
  digitalWrite(Green, HIGH);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, HIGH);
  digitalWrite(Blue4, LOW);
  delay(Del2);

  //Blue + Red4
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, HIGH);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, HIGH);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del2);

  //Red2 + Blue3
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, HIGH);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, HIGH);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del2);

  //Green2 + Green3
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, HIGH);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, HIGH);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del2);

  //Blue2 + Red3
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, HIGH);
  digitalWrite(Red3, HIGH);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del2);

  //Red3 + Blue2
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, HIGH);
  digitalWrite(Red3, HIGH);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del2);

  //Green3 + Green2
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, HIGH);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, HIGH);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del2);

  //Blue3 + Red2
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, HIGH);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, HIGH);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del2);

  //Red4 + Blue
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, HIGH);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, HIGH);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del2);

  //Green4 + Green
  digitalWrite(Red, LOW);
  digitalWrite(Green, HIGH);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, HIGH);
  digitalWrite(Blue4, LOW);
  delay(Del2);

  //Blue4 + Red
  digitalWrite(Red, HIGH);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, HIGH);
  delay(Del2);

  // Muster
  //Red, Green, Green2, Blue2, Blue3, Red4
  digitalWrite(Red, HIGH);
  digitalWrite(Green, HIGH);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, HIGH);
  digitalWrite(Blue2, HIGH);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, HIGH);
  digitalWrite(Red4, HIGH);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del3);

  //Blue, Red2, Red3, Green3, Green4, Blue4
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, HIGH);
  digitalWrite(Red2, HIGH);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, HIGH);
  digitalWrite(Green3, HIGH);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, HIGH);
  digitalWrite(Blue4, HIGH);
  delay(Del3);

  //Red, Green, Green2, Blue2, Blue3, Red4
  digitalWrite(Red, HIGH);
  digitalWrite(Green, HIGH);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, HIGH);
  digitalWrite(Blue2, HIGH);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, HIGH);
  digitalWrite(Red4, HIGH);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del3);

  //Blue, Red2, Red3, Green3, Green4, Blue4
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, HIGH);
  digitalWrite(Red2, HIGH);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, HIGH);
  digitalWrite(Green3, HIGH);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, HIGH);
  digitalWrite(Blue4, HIGH);
  delay(Del3);

  // Muster 4
  //Red, Blue, Green2, Red3, Blue3, Green4
  digitalWrite(Red, HIGH);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, HIGH);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, HIGH);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, HIGH);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, HIGH);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, HIGH);
  digitalWrite(Blue4, LOW);
  delay(Del4);

  //Green, Red2, Blue2, Green3, Red4, Blue4
  digitalWrite(Red, LOW);
  digitalWrite(Green, HIGH);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, HIGH);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, HIGH);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, HIGH);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, HIGH);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, HIGH);
  delay(Del4);

  //Red, Blue, Green2, Red3, Blue3, Green4
  digitalWrite(Red, HIGH);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, HIGH);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, HIGH);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, HIGH);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, HIGH);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, HIGH);
  digitalWrite(Blue4, LOW);
  delay(Del4);

  //Green, Red2, Blue2, Green3, Red4, Blue4
  digitalWrite(Red, LOW);
  digitalWrite(Green, HIGH);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, HIGH);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, HIGH);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, HIGH);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, HIGH);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, HIGH);
  delay(Del4);

  // Muster 5
  //Red, Green, Green4, Blue4
  digitalWrite(Red, HIGH);
  digitalWrite(Green, HIGH);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, HIGH);
  digitalWrite(Blue4, HIGH);
  delay(Del5);

  //Blue, Red2, Blue3, Red4
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, HIGH);
  digitalWrite(Red2, HIGH);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, HIGH);
  digitalWrite(Red4, HIGH);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del5);

  //Green2, Blue2, Red3, Green3
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, HIGH);
  digitalWrite(Blue2, HIGH);
  digitalWrite(Red3, HIGH);
  digitalWrite(Green3, HIGH);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del5);

  //Blue, Red2, Blue3, Red4
  digitalWrite(Red, LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, HIGH);
  digitalWrite(Red2, HIGH);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, HIGH);
  digitalWrite(Red4, HIGH);
  digitalWrite(Green4, LOW);
  digitalWrite(Blue4, LOW);
  delay(Del5);

  //Red, Green, Green4, Blue4
  digitalWrite(Red, HIGH);
  digitalWrite(Green, HIGH);
  digitalWrite(Blue, LOW);
  digitalWrite(Red2, LOW);
  digitalWrite(Green2, LOW);
  digitalWrite(Blue2, LOW);
  digitalWrite(Red3, LOW);
  digitalWrite(Green3, LOW);
  digitalWrite(Blue3, LOW);
  digitalWrite(Red4, LOW);
  digitalWrite(Green4, HIGH);
  digitalWrite(Blue4, HIGH);
  delay(Del5);
}
