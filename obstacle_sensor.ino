// create pin and check var
// IR = infared
int IR_pin = 10; // pin for infared sensor
int IR_read = HIGH; // HIGH means that the ir sensor sees no obstacle

void setup(){
  // set pin for IR read
  pinMode(IR_pin, INPUT);

  // serial begin 
  Serial.begin(9600);
  Serial.setTimeout(10);
};

void loop(){
  // read IR sensor pin
  IR_read = digitalRead(IR_pin);

  // check if pin low or high
  if(IR_read == LOW){
    // write serial info to comp
    Serial.write("true");
  };

  if(IR_read == HIGH){
    Serial.write("false");
  };
  
  // sleep time for 200 mill 
  delay(200);
};
