int serialData = 6;
int shiftClock = 7;
int latchClock = 8;
int enTOP = A0;
int enBOT = A1;
int bytesInDEC = 0;

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
  walkingPast();
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

void walkingPast()
{
  int bytesInDEC = 0;
  for(int count0 = 0; count0 < 1; count0++){
    bytesInDEC = 1;
    for(int count0 = 0; count0 < 8; count0++){
      digitalWrite(enTOP, HIGH);
      writeShiftRegister(bytesInDEC);
      delay(5);
      digitalWrite(enTOP, LOW);
      delay(400);
      bytesInDEC = bytesInDEC * 2;    
    }     
    for(int count1 = 0; count1 < 8; count1++){
      digitalWrite(enBOT, HIGH);
      writeShiftRegister(0);
      delay(5);
      digitalWrite(enBOT, LOW);
      delay(400);
    
    }  
  }      
}

void writeShiftRegister(int bytes)
{
  digitalWrite(latchClock, LOW);
  shiftOut(serialData, shiftClock, MSBFIRST, bytes);
  digitalWrite(latchClock, HIGH);
}
