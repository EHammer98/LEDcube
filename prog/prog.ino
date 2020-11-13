int serialData = 6;
int shiftClock = 7;
int latchClock = 8; 
//test

void setup() {
  // put your setup code here, to run once:
pinMode(serialData, OUTPUT);
pinMode(shiftClock, OUTPUT);
pinMode(latchClock, OUTPUT);
Serial.begin(9600);

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

int teller = 0;

  for(int hulp = 0; hulp < 2; hulp++){
    teller = 1;
    for(int hulp2 = 0; hulp2 < 8; hulp2++){
      
      digitalWrite(latchClock, LOW);

      shiftOut(serialData, shiftClock, MSBFIRST, teller);

      digitalWrite(latchClock, HIGH);

      delay(400);

      teller = teller * 2;

      Serial.print("loop");
      
    }
    teller = 128;
    for(int hulp3 = 0; hulp3 <= 8; hulp3++){

      digitalWrite(latchClock, LOW);

      shiftOut(serialData, shiftClock, MSBFIRST, teller);

      digitalWrite(latchClock, HIGH);

      delay(400);

      teller = teller / 2;
      
    }     
  }      
} 

void doubletrail(){

  int teller = 0;

  for(int hulp = 0; hulp < 2; hulp++){
    teller = 3;
    for(int hulp2 = 0; hulp2 < 8; hulp2++){
      
      digitalWrite(latchClock, LOW);

      shiftOut(serialData, shiftClock, MSBFIRST, teller);

      digitalWrite(latchClock, HIGH);

      delay(400);

      teller = teller * 2;
      
    }
    teller = 192;
    for(int hulp3 = 0; hulp3 <= 8; hulp3++){

      digitalWrite(latchClock, LOW);

      shiftOut(serialData, shiftClock, MSBFIRST, teller);

      digitalWrite(latchClock, HIGH);

      delay(400);

      teller = teller / 2;
      
    }     
  } 
}

void inout(){

  int teller = 0;

      for(int hulp = 0; hulp < 2; hulp++){

        teller = 129;
        
        digitalWrite(latchClock, LOW);

        shiftOut(serialData, shiftClock, MSBFIRST, teller);

        digitalWrite(latchClock, HIGH);

        delay(400);

        teller = 66;
        
        digitalWrite(latchClock, LOW);

        shiftOut(serialData, shiftClock, MSBFIRST, teller);

        digitalWrite(latchClock, HIGH);

        delay(400);

        teller = 36;
        
        digitalWrite(latchClock, LOW);

        shiftOut(serialData, shiftClock, MSBFIRST, teller);

        digitalWrite(latchClock, HIGH);

        delay(400);

        teller = 24;
        
        digitalWrite(latchClock, LOW);

        shiftOut(serialData, shiftClock, MSBFIRST, teller);

        digitalWrite(latchClock, HIGH);

        delay(400);

        teller = 36;
        
        digitalWrite(latchClock, LOW);

        shiftOut(serialData, shiftClock, MSBFIRST, teller);

        digitalWrite(latchClock, HIGH);

        delay(400);

        teller = 66;
        
        digitalWrite(latchClock, LOW);

        shiftOut(serialData, shiftClock, MSBFIRST, teller);

        digitalWrite(latchClock, HIGH);

        delay(400);

        teller = 129;
        
        digitalWrite(latchClock, LOW);

        shiftOut(serialData, shiftClock, MSBFIRST, teller);

        digitalWrite(latchClock, HIGH);

        delay(400);

      }
}



void loop() {
  // put your main code here, to run repeatedly:
  
onoff();
trail();
doubletrail();
inout();

  }
