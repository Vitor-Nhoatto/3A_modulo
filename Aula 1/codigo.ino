const int botao1 = 2;
const int botao2 = 3;
const int led = 4;

int var1; // define a variável
int var2; // define a variável
  
 void setup()
 { 
    pinMode(botao1, INPUT);
  	pinMode(botao2, INPUT);
    pinMode(led, OUTPUT);
   	Serial.begin(9600);
 }
 
 void loop()
 {
    var1 = digitalRead(botao1);
   	var2 = digitalRead(botao2);
   	
   if(var1){ // if espera resposta positiva true
     digitalWrite(led, HIGH);
     Serial.println("botao 1 apertado");
   }
   if(!var2){ // !  inverte o sinal para nergativo false
     digitalWrite(led,LOW);
     Serial.println("botao 2 apertado");
   }
 }
