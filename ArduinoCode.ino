int flag = 0;

void setup()

{

  pinMode(9, OUTPUT);    //buzzer

  pinMode(12, INPUT);     //flame sensor       

  Serial.begin(9600);    // the GPRS baud rate

  Module_Init();

}

void loop()

{

  int fire = digitalRead(12);

  if (fire == 0)

  {

    digitalWrite(9, HIGH);

    delay(6000);

    flag = 0;

  }

  else

  {

    digitalWrite(9, LOW);

    if (flag == 0)

    {

      flag = 1;

    }

  }

}
