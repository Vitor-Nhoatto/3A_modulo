void setup()
{
  pinMode(13, OUTPUT); 
  pinMode(12, OUTPUT); 
  pinMode(11, OUTPUT); 
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT); 
  pinMode(8, OUTPUT); 
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(4, OUTPUT); 
  
} 

void loop()
{ 
  digitalWrite(13, HIGH); 
  digitalWrite(8, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  delay(5000); 
  digitalWrite(13, LOW); 
  delay(1000);
  
  // AMARELO
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
  
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  delay(5000);
  digitalWrite(10, LOW); 
  delay(1000);
  
  // AMARELO
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(1000);
  
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW); 
  digitalWrite(8, HIGH);
  
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
}
