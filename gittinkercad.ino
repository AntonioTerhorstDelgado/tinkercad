void setup() {
  // put your setup code here, to run once:
Srial,begin(9600);
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(true){
  Srial.println("já estamos na 7º semana");
}
}
