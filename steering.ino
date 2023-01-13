/* This is a function to steer RC car */
void fwd(int pwm1, int pwm2){
  analogWrite(IN[0], pwm1);
  analogWrite(IN[1], LOW);
  analogWrite(IN[2], pwm2);
  analogWrite(IN[3], LOW);
}

void bwd(int pwm1, int pwm2){
  analogWrite(IN[0], LOW);
  analogWrite(IN[1], pwm1);
  analogWrite(IN[2], LOW);
  analogWrite(IN[3], pwm2);
}

void left(int pwm1, int pwm2){
  analogWrite(IN[0], LOW);
  analogWrite(IN[1], pwm1);
  analogWrite(IN[2], pwm2);
  analogWrite(IN[3], LOW);
}

void right(int pwm1, int pwm2){
  analogWrite(IN[0], pwm1);
  analogWrite(IN[1], LOW);
  analogWrite(IN[2], LOW);
  analogWrite(IN[3], pwm2);
}

void stop(){
  for(int in=0; in<4; in++){
    analogWrite(IN[in], LOW);
  }
}

void sensor(){
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  t = pulseIn(ECHO, HIGH);
  s = t * 0.034 / 2;

  // Serial.print("Distance: ");
  // Serial.println(s);
  // delayMicroseconds(100);
}
