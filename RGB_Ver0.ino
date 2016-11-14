//THIS CODE IS TO CHANGE THE RGB LEFD LIGHT SEQUENCE

void setup() {
  // initialize digital pins 2 - 4 as an output.
  pinMode(2, OUTPUT);//BLUE
  pinMode(3, OUTPUT);//GREEN
  pinMode(4, OUTPUT);//RED

}

// the loop function runs over and over again forever
void loop() {

  //BLUE
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);

  delay(1000);


  //GREEN
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);

  delay(2000);


  //RED
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);

  delay(3000);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);

  delay(5000);
}
