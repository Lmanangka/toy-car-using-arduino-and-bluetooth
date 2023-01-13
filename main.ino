//#define TRIG 7 //define trigger
//#define ECHO 8 //define echo
const int IN[] = {6, 9, 10, 11}; //define driver motor IN1-4

long t; //variable time
float s; // variable distance
int v = 150;

void setup() {
  //set a serial to baudrate 38400 to received data.
  Serial.begin(38400);
  for(int in=0; in<4; in++){ // set pins IN1-4 as OUTPUT
    pinMode(IN[in], OUTPUT);
  }
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() {
    /* logic to wait for bluetooth data to received a data in this case it will
    received a single char. */
  if(Serial.available() > 0){
    char tx = Serial.read();
    if(tx == 'w'){
      fwd(v, v);
      // Serial.println("fwd");
    }
    else if(tx == 's'){
      bwd(v, v);
      // Serial.println("bwd");
    }
    else if(tx == 'a'){
      left(v, v);
      // Serial.println("left");
    }
    else if(tx == 'd'){
      right(v, v);
      // Serial.println("right");
    }
    else if(tx == 'q'){
      if(v >= 255){
        v = 255;
      }
      else{
        v+=20;
      }
    }
    else if(tx == 'e'){
      if(v <= 150){
        v = 150;
      }
      else{
        v-=20;
      }
    }
    else{
      stop();
      // Serial.println("stop");
    }
  }
  if (!Serial.available()) {
      stop();
  }
  // sensor();
}
