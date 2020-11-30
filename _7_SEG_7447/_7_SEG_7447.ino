

int a = 13;
int b = 12;
int c = 11;
int d =10;
void setup()
{                
  // initialize the digital pin as an output.
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
   
}

void loop()
{
  digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
 digitalWrite(d, LOW);
 
  delay(1000);               // wait for a second
   digitalWrite(a, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
 digitalWrite(d, HIGH);
    delay(1000);           
}
