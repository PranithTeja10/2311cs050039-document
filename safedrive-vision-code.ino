#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,7,6,5,4);//initalize the library with the number of the interface pins
int buzzer=11; //assign pin for buzzer
int trigPin= 8; //assign Trig Pin
int echoPin=10; //assign Echo Pin
long duration;
long distance;
void setup()
{
  lcd.begin(16,2);//set up the lCD number of columns and rows
  lcd.print("Dai Nguyen");//print my name to first column and row of lcd display
  pinMode(buzzer,OUTPUT);//assign output for buzzer
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
}
void loop()
{
  int maxDis= 100;
  long pulseTimeout= (maxDis*1000000)/(0.5*343*100);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin,HIGH,pulseTimeout);
  distance = 0.5*(pulseTimeout*343*100)*(1/1000000); //distance in cm
  if (distance>0 && distance <=20)
  {
  lcd.setCursor(6,1); //set cursor the the 6th column of second row
  lcd.print("Dis cm:");//print out the distance
  lcd.print(distance);
  lcd.setCursor(0,1);
  lcd.print(" s:");
  lcd.print(duration);
  tone(buzzer,261);//buzz at the frequency relative to C note in Hz
  delay(500);
  }
  else if (distance>20 && distance <=60)
  {
    lcd.setCursor(6,1);
    lcd.print("Dis cm:");//print out the distance
    lcd.print(distance);
    lcd.setCursor(0,1);
    lcd.print(" s:");
    lcd.print(duration);
    tone(buzzer,293);//buzz at the frequency relative to D note in Hz
    delay(500);
  }
  else if (distance>60 && distance <=80)
  {
    lcd.setCursor(6,1);
    lcd.print("Dis cm:");//print out the distance
    lcd.print(distance);
    lcd.setCursor(0,1);
    lcd.print(" s:");
    lcd.print(duration);
    tone(buzzer,329);//buzz at the frequency relative to E note in Hz
    delay(500);
  }
  else if (distance > 80 && distance <=100)
  {
    lcd.setCursor(6,1);
    lcd.print("Dis cm:");//print out the distance
    lcd.print(distance);
    lcd.setCursor(0,1);
    lcd.print(" s:");
    lcd.print(duration);
    tone(buzzer,349);//buzz at the frequency relative to F note in Hz
    delay(500);
  }
  else
  {
    lcd.setCursor(6,1);
    lcd.print("Dis cm:");//print out the distance
     lcd.print(distance);
    lcd.setCursor(0,1);
    lcd.print(" s:");
    lcd.print(duration);
    tone(buzzer,392);//buzz at the frequency relative to G note in Hz
    delay(500);
  }
}
