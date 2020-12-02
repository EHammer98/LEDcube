// new output ports 
int serialData = 9;
int shiftClock = 8;
int latchClock = 7; // david 13, otherwise 7
int laag1 = A0;
int laag2 = A1;
int laag3 = A3;
int laag4 = A2;
int thsecond = 100;
// change laag 3&4 verschillend
int binc = 0;
int binc2 = 0;
//
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

// cirkel, opzij, achter, lagen, spin
void loop()
{
  test();
  cirkel();
  opzij();
  achter();
  lagen();
  alles();
  spin();
  //bin();
  //bin2();
}

 void test(){
  for (int count = 0; count<2; count++){
    digitalWrite(laag1, HIGH);
    digitalWrite(laag2, HIGH);
    digitalWrite(laag3, HIGH);
    digitalWrite(laag4, HIGH);
    writeShiftRegisterCascade(1,0);
    delay(thsecond*2);
    writeShiftRegisterCascade(2,0);
    delay(thsecond*2);
    writeShiftRegisterCascade(4,0);
    delay(thsecond*2);
    writeShiftRegisterCascade(8,0);
    delay(thsecond*2);
    writeShiftRegisterCascade(16,0);
    delay(thsecond*2);
    writeShiftRegisterCascade(32,0);
    delay(thsecond*2);
    writeShiftRegisterCascade(64,0);
    delay(thsecond*2);
    writeShiftRegisterCascade(128,0);
    delay(thsecond*2);
    writeShiftRegisterCascade(0,1);
    delay(thsecond*2);
    writeShiftRegisterCascade(0,2);
    delay(thsecond*2);
    writeShiftRegisterCascade(0,4);
    delay(thsecond*2);
    writeShiftRegisterCascade(0,8);
    delay(thsecond*2);
    writeShiftRegisterCascade(0,16);
    delay(thsecond*2);
    writeShiftRegisterCascade(0,32);
    delay(thsecond*2);
    writeShiftRegisterCascade(0,64);
    delay(thsecond*2);
    writeShiftRegisterCascade(0,128);
    delay(thsecond*2);
    }
  }

void cirkel(){
  digitalWrite(laag1, HIGH);
  digitalWrite(laag2, HIGH);
  digitalWrite(laag3, HIGH);
  digitalWrite(laag4, HIGH);

  for( int i =0; i <= thsecond; i++){
  writeShiftRegisterCascade(136,136); //17.17
  delay(2);
  //delay(thsecond);
  }
  
  for (int count = 0; count<2; count++){
    /*digitalWrite(laag1, HIGH);
    digitalWrite(laag2, HIGH);
    digitalWrite(laag3, HIGH);
    digitalWrite(laag4, HIGH);*/
    
    for(int i = 0; i <= thsecond; i++){
      writeShiftRegisterCascade(128,200); //16.49
      delay(1);
      writeShiftRegisterCascade(128,200);
      delay(1);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(0,232); //0.113
    delay(1);
    writeShiftRegisterCascade(0,232);
    delay(1);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(0,240); //0.240
    delay(1);
    writeShiftRegisterCascade(0,240);
    delay(1);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(0,113); //0.232
    delay(1);
    writeShiftRegisterCascade(0,113);
    delay(1);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(16,49); //128,200
    delay(1);
    writeShiftRegisterCascade(16,49);
    delay(1);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(17,17); //136
    delay(2);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(19,1); //140.8
    delay(1);
    writeShiftRegisterCascade(19,1);
    delay(1);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(23,0); // 142.0
    delay(1);
    writeShiftRegisterCascade(23,0);
    delay(1);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(15,0); // 15.0
    delay(1);
    writeShiftRegisterCascade(15,0);
    delay(1);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(142,0); //23.0
    delay(1);
    writeShiftRegisterCascade(142,0);
    delay(1);
    }
    
    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(140,8); //19.1
    delay(1);
    writeShiftRegisterCascade(140,8);
    delay(1);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(136,136); //17.17
    delay(2);
    }
    }
}

void opzij(){
    //digitalWrite(laag1, HIGH);
    //digitalWrite(laag2, HIGH);
    //digitalWrite(laag3, HIGH);
    //digitalWrite(laag4, HIGH);
    for( int i =0; i <= thsecond; i++){
    writeShiftRegisterCascade(136,136); //17
    delay(2);
    }
    //delay(thsecond);
  for (int count = 0; count<2; count++){
   
    //digitalWrite(laag1, HIGH);
    //digitalWrite(laag2, HIGH);
    //digitalWrite(laag3, HIGH);
    //digitalWrite(laag4, HIGH);
    for( int i =0; i <= thsecond; i++){
    writeShiftRegisterCascade(68,68); //34
    delay(2);
    }

    for( int i =0; i <= thsecond; i++){
    writeShiftRegisterCascade(34,34); //68
    delay(2);
    }

    for( int i =0; i <= thsecond; i++){
    writeShiftRegisterCascade(17,17); //136
    delay(2);
    }
    
    for( int i =0; i <= thsecond; i++){
    writeShiftRegisterCascade(34,34); //68
    delay(2);
    }
    
    for( int i =0; i <= thsecond; i++){
    writeShiftRegisterCascade(68,68); //34
    delay(2);
    }
    
    for( int i =0; i <= thsecond; i++){
    writeShiftRegisterCascade(136,136); //17
    delay(2);
    }   
  }
}

void achter(){
    //digitalWrite(laag1, HIGH);
    //digitalWrite(laag2, HIGH);
    //digitalWrite(laag3, HIGH);
    //digitalWrite(laag4, HIGH);
    for( int i =0; i <= thsecond; i++){
    writeShiftRegisterCascade(0,48); //.240
    delay(1);
    writeShiftRegisterCascade(0,192);
    delay(1);
    }
    //delay(thsecond);
  for (int count = 0; count<2; count++){
    //digitalWrite(laag1, HIGH);
    //digitalWrite(laag2, HIGH);
    //digitalWrite(laag3, HIGH);
    //digitalWrite(laag4, HIGH);
    for( int i =0; i <= thsecond; i++){
    writeShiftRegisterCascade(0,12); //.15
    delay(1);
    writeShiftRegisterCascade(0,3);
    delay(1);
    }

    for( int i =0; i <= thsecond; i++){
    writeShiftRegisterCascade(48,0); //240.
    delay(1);
    writeShiftRegisterCascade(192,0);
    delay(1);
    }
    
    for( int i =0; i <= thsecond; i++){
    writeShiftRegisterCascade(12,0); //15.
    delay(1);
    writeShiftRegisterCascade(3,0);
    delay(1);
    }
    
    for( int i =0; i <= thsecond; i++){
    writeShiftRegisterCascade(48,0); //240.
    delay(1);
    writeShiftRegisterCascade(192,0);
    delay(1);
    }
    
    for( int i =0; i <= thsecond; i++){
    writeShiftRegisterCascade(0,12); //.15
    delay(1);
    writeShiftRegisterCascade(0,3);
    delay(1);
    }
    
    for( int i =0; i <= thsecond; i++){
    writeShiftRegisterCascade(0,48); //.240
    delay(1);
    writeShiftRegisterCascade(0,192);
    delay(1);
    }
  }
}

void lagen(){
    //writeShiftRegisterCascade(255,255);
    digitalWrite(laag1, LOW);
    digitalWrite(laag2, LOW);
    digitalWrite(laag3, LOW);
    digitalWrite(laag4, LOW);

      digitalWrite(laag1, HIGH);
      for(int j = 0; j <= thsecond*2.5; j++){
        laagCascade();
      }
      digitalWrite(laag1, LOW);

    for(int i = 0; i < 2; i++){

      
      digitalWrite(laag2, HIGH);
      for(int j = 0; j <= thsecond*2.5; j++){
        laagCascade();
      }
      digitalWrite(laag2, LOW);

      
      digitalWrite(laag3, HIGH);
      for(int j = 0; j <= thsecond*2.5; j++){
        laagCascade();
      }
      digitalWrite(laag3, LOW);

      
      digitalWrite(laag4, HIGH);
      for(int j = 0; j <= thsecond*2.5; j++){
        laagCascade();
      }
      digitalWrite(laag4, LOW);

      digitalWrite(laag3, HIGH);
      for(int j = 0; j <= thsecond*2.5; j++){
        laagCascade();
      }
      digitalWrite(laag3, LOW);

      digitalWrite(laag2, HIGH);
      for(int j = 0; j <= thsecond*2.5; j++){
        laagCascade();
      }
      digitalWrite(laag2, LOW);

      digitalWrite(laag1, HIGH);
      for(int j = 0; j <= thsecond*2.5; j++){
        laagCascade();
      }
      digitalWrite(laag1, LOW);

    }
  }

void alles(){
    
    for(int count=0; count<5; count++){
    writeShiftRegisterCascade(255,255);
    digitalWrite(laag1, LOW);
    digitalWrite(laag2, LOW);
    digitalWrite(laag3, LOW);
    digitalWrite(laag4, LOW);

    delay(thsecond*4);
    digitalWrite(laag1, HIGH);
    digitalWrite(laag2, HIGH);
    digitalWrite(laag3, HIGH);
    digitalWrite(laag4, HIGH);
    delay(thsecond*4);
    }
  }

void bin(){
  binc=0;
  writeShiftRegisterCascade(0,0);
  while(binc<2048){
    binc++;
    if(binc<256){
      writeShiftRegisterCascade(binc,binc);
        digitalWrite(laag1, HIGH);
        digitalWrite(laag2, LOW);
        digitalWrite(laag3, LOW);
        digitalWrite(laag4, LOW);
      delay(thsecond*2);
      }
    if(binc>256 && binc<512){
      writeShiftRegisterCascade(binc-256,binc-256);
        digitalWrite(laag1, HIGH);
        digitalWrite(laag2, HIGH);
        digitalWrite(laag3, LOW);
        digitalWrite(laag4, LOW);
      delay(thsecond*2);
      }
    if(binc>512 && binc<1024){
      writeShiftRegisterCascade(binc-512,binc-512);
        digitalWrite(laag1, HIGH);
        digitalWrite(laag2, HIGH);
        digitalWrite(laag3, HIGH);
        digitalWrite(laag4, LOW);
      delay(thsecond*2);
      }
    if(binc>1024 && binc<2048){
       writeShiftRegisterCascade(binc-1024,binc-1024);
        digitalWrite(laag1, HIGH);
        digitalWrite(laag2, HIGH);
        digitalWrite(laag3, HIGH);
        digitalWrite(laag4, HIGH);
      delay(thsecond*2);
      }
    }
  }

  void bin2(){
  binc=0;
  binc2=0;
  writeShiftRegisterCascade(0,0);
  while(binc2<256){
    binc++;
    if(binc<256){
      writeShiftRegisterCascade(binc,binc2);
      delay(thsecond*2);
      }
    if(binc>256){
      binc=0;
      binc2++;
      writeShiftRegisterCascade(binc,binc2);
      delay(thsecond*2);
      }
    }
  }

  void spin(){

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(72,18);
    delay(2);
    }

    for(int i = 0; i <2; i++){

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(192,12);
    delay(1);
    writeShiftRegisterCascade(48,3);
    delay(1);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(33,132);
    delay(2);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(68,68);
    delay(1);
    writeShiftRegisterCascade(34,34);
    delay(1);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(72,18);
    delay(2);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(192,12);
    delay(1);
    writeShiftRegisterCascade(48,3);
    delay(1);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(33,132);
    delay(2);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(68,68);
    delay(1);
    writeShiftRegisterCascade(34,34);
    delay(1);
    }

    for(int i = 0; i <= thsecond; i++){
    writeShiftRegisterCascade(72,18);
    delay(2);
    }
    
  }

 }


// change bytes1/2 if necesarry in the shiftout var.
void writeShiftRegisterCascade(int bytes1, int bytes2)
{
  digitalWrite(laag1, LOW);
  digitalWrite(laag2, LOW);
  digitalWrite(laag3, LOW);
  digitalWrite(laag4, LOW);
  
  digitalWrite(latchClock, LOW);
  shiftOut(serialData, shiftClock, MSBFIRST, bytes2);
  digitalWrite(latchClock, HIGH);
  digitalWrite(latchClock, LOW);
  shiftOut(serialData, shiftClock, MSBFIRST, bytes1);
  digitalWrite(latchClock, HIGH);

  digitalWrite(laag1, HIGH);
  digitalWrite(laag2, HIGH);
  digitalWrite(laag3, HIGH);
  digitalWrite(laag4, HIGH);
}

void laagCascade()
{

    digitalWrite(latchClock, LOW);
    shiftOut(serialData, shiftClock, MSBFIRST, 17);
    digitalWrite(latchClock, HIGH);
    digitalWrite(latchClock, LOW);
    shiftOut(serialData, shiftClock, MSBFIRST, 17);
    digitalWrite(latchClock, HIGH);
    delay(0.5);
    
    digitalWrite(latchClock, LOW);
    shiftOut(serialData, shiftClock, MSBFIRST, 68);
    digitalWrite(latchClock, HIGH);
    digitalWrite(latchClock, LOW);
    shiftOut(serialData, shiftClock, MSBFIRST, 68);
    digitalWrite(latchClock, HIGH);
    delay(0.5);
    
    digitalWrite(latchClock, LOW);
    shiftOut(serialData, shiftClock, MSBFIRST, 34);
    digitalWrite(latchClock, HIGH);
    digitalWrite(latchClock, LOW);
    shiftOut(serialData, shiftClock, MSBFIRST, 34);
    digitalWrite(latchClock, HIGH);
    delay(0.5);
    
    digitalWrite(latchClock, LOW);
    shiftOut(serialData, shiftClock, MSBFIRST, 136);
    digitalWrite(latchClock, HIGH);
    digitalWrite(latchClock, LOW);
    shiftOut(serialData, shiftClock, MSBFIRST, 136);
    digitalWrite(latchClock, HIGH);
    delay(0.5);

}
