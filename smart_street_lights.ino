const int ir1 = 6;
const int ir2 = 7;
const int ir3 = 8;
const int ldr = 9;
const int SL1 = 10;
const int SL2 = 11;
const int SL3 = 12;

void setup() {
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ldr, INPUT);
  pinMode(SL1, OUTPUT);
  pinMode(SL2, OUTPUT);
  pinMode(SL3, OUTPUT);
  pinMode(ir1, INPUT);
  Serial.begin(9600);
}

void loop() {
  int locA = digitalRead(ir1);
  int locB = digitalRead(ir2);
  int locC = digitalRead(ir3);
  int night = digitalRead(ldr);
  if(night){

    Serial.print("It's Night");
    if(!locA){
      Serial.print("Person at location A");
      digitalWrite(SL1,HIGH);
    }
    else{
      digitalWrite(SL1, LOW);
    }

    if(!locB){
      Serial.print("Person at location B");
      digitalWrite(SL2, HIGH);
    }
    else{
      digitalWrite(SL2, LOW);
    }

    if(!locC){
      Serial.print("Person at location C");
      digitalWrite(SL3,HIGH);
    }else{
      digitalWrite(SL3, LOW);
    }

  }
  else{
    Serial.print("It's day");
    digitalWrite(SL1,LOW);
    digitalWrite(SL2,LOW);
    digitalWrite(SL3,LOW);
  };
}
