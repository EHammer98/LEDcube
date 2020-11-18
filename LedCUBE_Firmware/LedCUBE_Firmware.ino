/* LedCUBE_Firmware
 * Project blok2
 * Auteurs: B. Weenk, E. Hammer, D. van Soelen
 * 
 */

int serialData = 6;
int shiftClock = 7;
int latchClock = 8;
int enTOP = A0;
int enBOT = A1;
int bytesInDEC = 0;
int bytesInDEC1 = 0;

void setup()
{
  pinMode(serialData, OUTPUT);
  pinMode(shiftClock, OUTPUT);
  pinMode(latchClock, OUTPUT);
  pinMode(enTOP, OUTPUT);
  pinMode(enBOT, OUTPUT);
  digitalWrite(enTOP, HIGH);
  digitalWrite(enBOT, HIGH);
  Serial.begin(9600);
}

void loop()
{
  switching();
  blinkAll();
  walkPast();
  walkTowards();
}

void switching()
{
  for (int count = 0; count < 3; count++) {
    for (int count = 0; count < 35; count++) {
      digitalWrite(enTOP, HIGH);
      writeShiftRegister(170);
      delay(5);
      digitalWrite(enTOP, LOW);
      digitalWrite(enBOT, HIGH);
      writeShiftRegister(85);
      delay(5);
      digitalWrite(enBOT, LOW);
    }

    for (int count1 = 0; count1 < 35; count1++) {
      digitalWrite(enTOP, HIGH);
      writeShiftRegister(85);
      delay(5);
      digitalWrite(enTOP, LOW);
      digitalWrite(enBOT, HIGH);
      writeShiftRegister(170);
      delay(5);
      digitalWrite(enBOT, LOW);
    }
  }
}

void blinkAll()
{
  for (int count = 0; count < 3; count++) {
    for (int count = 0; count < 35; count++) {
      digitalWrite(enTOP, HIGH);
      writeShiftRegister(255);
      delay(5);
      digitalWrite(enTOP, LOW);
      digitalWrite(enBOT, HIGH);
      writeShiftRegister(255);
      delay(5);
      digitalWrite(enBOT, LOW);
    }

    for (int count1 = 0; count1 < 35; count1++) {
      digitalWrite(enTOP, HIGH);
      writeShiftRegister(0);
      delay(5);
      digitalWrite(enTOP, LOW);
      digitalWrite(enBOT, HIGH);
      writeShiftRegister(0);
      delay(5);
      digitalWrite(enBOT, LOW);
    }
  }
}

void walkPast()
{
  int bytesInDEC = 0;
  for(int count0 = 0; count0 < 1; count0++){
    bytesInDEC = 1;
    for(int count0 = 0; count0 < 8; count0++){
      digitalWrite(enBOT, HIGH);
      digitalWrite(enTOP, HIGH);
      writeShiftRegister(bytesInDEC);
      digitalWrite(enTOP, LOW);
      delay(400);
      bytesInDEC = bytesInDEC * 2;    
    }
    bytesInDEC = 128;
    for(int count0 = 0; count0 < 8; count0++){
      digitalWrite(enBOT, HIGH);
      digitalWrite(enTOP, HIGH);
      writeShiftRegister(bytesInDEC);
      digitalWrite(enBOT, LOW);
      delay(400);
      bytesInDEC = bytesInDEC / 2;    
    }   
  }      
}

void walkTowards()
{
  for(int count0 = 0; count0 < 1; count0++){
    bytesInDEC = 1;
    bytesInDEC1 = 128;
    for(int count0 = 0; count0 < 8; count0++){
      digitalWrite(enBOT, HIGH);
      digitalWrite(enTOP, HIGH);
      writeShiftRegister(bytesInDEC);
      digitalWrite(enTOP, LOW);
      delay(400);
      bytesInDEC = bytesInDEC * 2;    
            digitalWrite(enBOT, HIGH);
      digitalWrite(enTOP, HIGH);
      writeShiftRegister(bytesInDEC1);
      digitalWrite(enBOT, LOW);
      delay(400);
      bytesInDEC1 = bytesInDEC1 / 2; 
    }
        bytesInDEC1 = 1;
    bytesInDEC = 128;
    for(int count0 = 0; count0 < 8; count0++){
      //digitalWrite(enBOT, HIGH);
      digitalWrite(enTOP, HIGH);
      writeShiftRegister(bytesInDEC);
      digitalWrite(enTOP, LOW);
      delay(400);
      bytesInDEC = bytesInDEC * 2;    
            digitalWrite(enBOT, HIGH);
      //digitalWrite(enTOP, HIGH);
      writeShiftRegister(bytesInDEC1);
      digitalWrite(enBOT, LOW);
      delay(400);
      bytesInDEC1 = bytesInDEC1 / 2;   
    }   
  } 
}

void writeShiftRegister(int bytes)
{
  digitalWrite(latchClock, LOW);
  shiftOut(serialData, shiftClock, MSBFIRST, bytes);
  digitalWrite(latchClock, HIGH);
}
