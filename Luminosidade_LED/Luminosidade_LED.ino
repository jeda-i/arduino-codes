int ledPin = 2; //Pino do led
int ldrPin = 5; //Pino de entrada do ldr
int valorLdr = 0; //Variavel que guardará o valor do ldr

void setup() {
  // put your setup code here, to run once:
  pinMode (ledPin, OUTPUT);
  pinMode (ldrPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorLdr = analogRead(ldrPin);
  Serial.print("Valor lido do LDR: ");
  Serial.println(valorLdr);
  if (valorLdr <80){
  digitalWrite(ledPin, HIGH);
  }else {
  digitalWrite(ledPin, LOW);
  }
  delay(250);
}
