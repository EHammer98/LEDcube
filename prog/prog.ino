int serialData = 6;
int shiftClock = 7;
int latchClock = 8; 

void setup() {
  // put your setup code here, to run once:
pinMode(serialData, OUTPUT);
pinMode(shiftClock, OUTPUT);
pinMode(latchClock, OUTPUT);

}

void onoff(){

 for(int hulp = 0; hulp < 3; hulp++){
  
  int teller = 0;

  digitalWrite(latchClock, LOW);

  teller = 170;
     
  shiftOut(serialData, shiftClock, MSBFIRST, teller);

  digitalWrite(latchClock, HIGH);

  delay(500);

  digitalWrite(latchClock, LOW);

  teller = 85;

  shiftOut(serialData, shiftClock, MSBFIRST, teller);

  digitalWrite(latchClock, HIGH);

  delay(500);

 }
}

void trail(){

} 

void doubletrail(){
  
}

void inout(){
  
}



void loop() {
  // put your main code here, to run repeatedly:
  
onoff();
trail();
doubletrail();
inout();

  }
