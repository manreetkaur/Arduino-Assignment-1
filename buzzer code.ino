 int i=0;
void setup()
{
  pinMode(6, OUTPUT);
}

void loop()
{
  for (i = 1; i < 256; ++i)
  {
  analogWrite(6, i);
  delay(20);
  }
}