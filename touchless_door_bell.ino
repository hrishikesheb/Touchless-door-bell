//code by eb hrishikesh
#include<LiquidCrystal.h>
int signalpin=2;
int buzzerpin=3;
int rs=12;
int en=11;
int d4=7;
int d5=6;
int d6=5;
int d7=4;
LiquidCrystal lcd1(rs,en,d4,d5,d6,d7);
void setup()
{
  pinMode(signalpin,INPUT);
  pinMode(buzzerpin,OUTPUT);
  lcd1.begin(16,2);
  lcd1.setCursor(0,0);
  lcd1.print("SHOW YOUR HAND ");
  lcd1.setCursor(0,1);
  lcd1.print("TO RING THE BELL");
  
}

void loop()
{
  if(digitalRead(signalpin)==HIGH)
    {tone(buzzerpin,200);
     delay(50);
     tone(buzzerpin,500);
     delay(50);
     tone(buzzerpin,900);
     delay(50);
     tone(buzzerpin,1000);
     delay(50);
     tone(buzzerpin,1300);
     delay(50);
     tone(buzzerpin,1800);
     delay(50);
     
    }
  else
    {noTone(buzzerpin);
    } 
}
