// new output ports 
int serialData = 9;
int shiftClock = 8;
int latchClock = 7;
// EDIT these Elwin ^^
int laag1 = A0;
int laag2 = A1;
int laag3 = A2;
int laag4 = A3;
int bytesInDEC = 0;
int bytesInDEC1 = 0;
int thsecond = 500;


void setup()
{
  pinMode(serialData, OUTPUT);
  pinMode(shiftClock, OUTPUT);
  pinMode(latchClock, OUTPUT);
  pinMode(laag1, OUTPUT);
  pinMode(laag2, OUTPUT);
  pinMode(laag3, OUTPUT);
  pinMode(laag4, OUTPUT);
  digitalWrite(laag1, HIGH);
  digitalWrite(laag2, HIGH);
  digitalWrite(laag3, HIGH);
  digitalWrite(laag4, HIGH);
  Serial.begin(9600);
}
// cirkel, opzij, achter, lagen
void loop()
{
  cirkel();
  opzij();
  achter();
  lagen();
}

void cirkel()
{
  for (int count = 0; count<2; count++){
    digitalWrite(laag1, HIGH);
    digitalWrite(laag2, HIGH);
    digitalWrite(laag3, HIGH);
    digitalWrite(laag4, HIGH);
    writeShiftRegisterCascade(136,136);
    delay(thsecond/2);
    writeShiftRegisterCascade(128,200);
    delay(thsecond);
    writeShiftRegisterCascade(0,232);
    delay(thsecond);
    writeShiftRegisterCascade(0,240);
    delay(thsecond);
    writeShiftRegisterCascade(0,113);
    delay(thsecond);
    writeShiftRegisterCascade(16,49);
    delay(thsecond);
    writeShiftRegisterCascade(17,17);
    delay(thsecond);
    writeShiftRegisterCascade(19,1);
    delay(thsecond);
    writeShiftRegisterCascade(23,0);
    delay(thsecond);
    writeShiftRegisterCascade(15,0);
    delay(thsecond);
    writeShiftRegisterCascade(142,0);
    delay(thsecond);
    writeShiftRegisterCascade(140,0);
    delay(thsecond);
    writeShiftRegisterCascade(136,136);
    delay(thsecond/2);
    }
}

void opzij(){
  for (int count = 0; count<2; count++){
    digitalWrite(laag1, HIGH);
    digitalWrite(laag2, HIGH);
    digitalWrite(laag3, HIGH);
    digitalWrite(laag4, HIGH);
    writeShiftRegisterCascade(136,136);
    delay(thsecond/2);
    writeShiftRegisterCascade(68,68);
    delay(thsecond);
    writeShiftRegisterCascade(34,34);
    delay(thsecond);
    writeShiftRegisterCascade(17,17);
    delay(thsecond);
    writeShiftRegisterCascade(34,34);
    delay(thsecond);
    writeShiftRegisterCascade(68,68);
    delay(thsecond);
    writeShiftRegisterCascade(136,136);
    delay(thsecond/2);  
  }
}

void achter(){
  for (int count = 0; count<2; count++){
    digitalWrite(laag1, HIGH);
    digitalWrite(laag2, HIGH);
    digitalWrite(laag3, HIGH);
    digitalWrite(laag4, HIGH);
    writeShiftRegisterCascade(0,240);
    delay(thsecond/2);
    writeShiftRegisterCascade(0,15);
    delay(thsecond);
    writeShiftRegisterCascade(240,0);
    delay(thsecond);
    writeShiftRegisterCascade(15,0);
    delay(thsecond);
    writeShiftRegisterCascade(240,0);
    delay(thsecond);
    writeShiftRegisterCascade(0,15);
    delay(thsecond);
    writeShiftRegisterCascade(0,240);
    delay(thsecond/2);
  }
}

void lagen(){
  for (int count = 0; count<2; count++){
    digitalWrite(laag1, LOW);
    digitalWrite(laag2, LOW);
    digitalWrite(laag3, LOW);
    digitalWrite(laag4, LOW);
    writeShiftRegisterCascade(255,255);
    digitalWrite(laag1, HIGH);
    delay(thsecond/2);
    
    digitalWrite(laag1, LOW);
    delay(1);
    digitalWrite(laag2, HIGH);
    delay(thsecond);
    
    digitalWrite(laag2, LOW);
    delay(1);
    digitalWrite(laag3, HIGH);
    delay(thsecond);
    
    digitalWrite(laag3, LOW);
    delay(1);
    digitalWrite(laag4, HIGH);
    delay(thsecond);
    
    digitalWrite(laag4, LOW);
    delay(1);
    digitalWrite(laag3, HIGH);
    delay(thsecond);

    digitalWrite(laag3, LOW);
    delay(1);
    digitalWrite(laag2, HIGH);
    delay(thsecond);

    digitalWrite(laag2, LOW);
    delay(1);
    digitalWrite(laag1, HIGH);
    delay(thsecond/2);
  }
}
// change bytes1/2 if necesarry in the shiftout var.
void writeShiftRegisterCascade(int bytes1, int bytes2)
{
  digitalWrite(latchClock, LOW);
  shiftOut(serialData, shiftClock, MSBFIRST, bytes1);
  digitalWrite(latchClock, HIGH);
  digitalWrite(latchClock, LOW);
  shiftOut(serialData, shiftClock, MSBFIRST, bytes2);
  digitalWrite(latchClock, HIGH);
}
