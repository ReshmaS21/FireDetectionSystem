
void setup()

{

  pinMode(9, OUTPUT);    //buzzer

  pinMode(12, INPUT);     //flame sensor       

  Serial.begin(9600);    // the GPRS baud rate
}

void loop()

{

  int fire = digitalRead(12);
  if (fire != 0)
  {

    digitalWrite(9, HIGH);

    delay(3000);

  }
  else
  {

    digitalWrite(9, LOW);

  }

}
