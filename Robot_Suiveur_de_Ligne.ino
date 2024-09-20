boolean __ardublockDigitalRead(int pinNumber)
{
  pinMode(pinNumber, INPUT);
  return digitalRead(pinNumber);
}


void right();
void Forward();
void left();
void stop();
void backward();

void setup()
{
  pinMode( 9 , OUTPUT);
  pinMode( 10 , OUTPUT); 
  pinMode( 5 , OUTPUT);
  pinMode( 6 , OUTPUT);
  pinMode( 7 , OUTPUT);
  pinMode( 8 , OUTPUT);

}

void loop()
{  if ( !( __ardublockDigitalRead(11) ) && !( __ardublockDigitalRead(13)) &&  !( __ardublockDigitalRead(11) ) )
  {
    stop ();
    delay(2000);
  }
  else
  {
    if (__ardublockDigitalRead(12))
  {
    if (( __ardublockDigitalRead(11) && !( __ardublockDigitalRead(13) ) ))
    {
      left();
    }
    else
    {
      if (( !( __ardublockDigitalRead(11) ) && __ardublockDigitalRead(13) ))
      {
        right();
      }
    }
  }

      else
      {
        Forward();
      }
  }
 
}


void left()
{
  analogWrite(9,130);  
  analogWrite(10,130); 
  digitalWrite(5 , LOW);
  digitalWrite(6 , HIGH);
  digitalWrite(7 , LOW);
  digitalWrite(8 , HIGH);
}

void stop()
{
  digitalWrite(5 , LOW);
  digitalWrite(6 , LOW);
  digitalWrite(7 , LOW);
  digitalWrite(8 , LOW);
}

void right()
{
  analogWrite(9,130);  
  analogWrite(10,130); 
  digitalWrite(5 , HIGH);
  digitalWrite(6 , LOW);
  digitalWrite(7 , HIGH);
  digitalWrite(8 , LOW);


}

void Forward()
{
  analogWrite(9,90);  
  analogWrite(10,90); 
  digitalWrite(5 , HIGH);
  digitalWrite(6 , LOW);
  digitalWrite(7 , LOW);
  digitalWrite(8 , HIGH);
}