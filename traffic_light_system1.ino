int vledred = 1;
int vledorange = 2;
int vledgreen = 3;


void setup() {
  pinMode(vledred, OUTPUT);
  pinMode(vledorange, OUTPUT);
  pinMode(vledgreen, OUTPUT);
}

void loop() 
{
  digitalWrite(vledred,1);
  delay(10000);
  digitalWrite(vledred,0);
  digitalWrite(vledorange,1);
  delay(2000);
  digitalWrite(vledorange,0);
  digitalWrite(vledgreen,1);
  delay(10000);
  digitalWrite(vledgreen,0);
  digitalWrite(vledorange,1);
  delay(2000);
  digitalWrite(vledorange,0);

}