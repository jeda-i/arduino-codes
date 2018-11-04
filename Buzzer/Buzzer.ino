int buzzer = 10;

void setup() {
  // put your setup code here, to run once:
pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    // Aciona o buzzer na frequencia relativa ao Dó em Hz
    tone(buzzer,261);    
    // Espera um tempo para Desativar
    delay(200);
    //Desativa o buzzer
    noTone(buzzer);
    delay(200); 
    // Aciona o buzzer na frequencia relativa ao Ré em Hz   
    tone(buzzer,293);             
    delay(200);    
    noTone(buzzer); 
    delay(200);
    // Aciona o buzzer na frequencia relativa ao Mi em Hz
    tone(buzzer,329);      
    delay(200);
    noTone(buzzer);  
    delay(200);   
    // Aciona o buzzer na frequencia relativa ao Fá em Hz
    tone(buzzer,349);    
    delay(200);    
    noTone(buzzer); 
    delay(200);
    // Aciona o buzzer na frequencia relativa ao Sol em Hz
    tone(buzzer,392);            
    delay(200);
    noTone(buzzer);
    delay(200);
}
