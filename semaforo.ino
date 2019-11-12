int verde=16;
int amarillo=5;
int rojo=0;
byte sensorpir = 15;



 void cverde(){
  digitalWrite(verde, HIGH);
  delay(2500);
  digitalWrite(verde, LOW);
  delay(500);
  for(int i=0; i<=1;i++)
  {
  digitalWrite(verde, HIGH);
  delay(500);
  digitalWrite(verde, LOW);
  delay(500);
  }
  }

  void camarillo(){
  for(int i=0; i<=2;i++)
  {
  digitalWrite(amarillo, HIGH);
  delay(500);
  digitalWrite(amarillo, LOW);
  delay(500);
  }
  }
  void crojo(){
  digitalWrite(rojo, HIGH);
  delay(2500);
  digitalWrite(rojo, LOW);
  delay(500);
  }
  void setup() {

  pinMode(verde,OUTPUT);
  pinMode(amarillo,OUTPUT);
  pinMode(rojo,OUTPUT);
  pinMode(sensorpir,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  

  if(digitalRead(sensorpir) == HIGH)
  {
    Serial.println("Detectado movimiento por el sensor pir");
    crojo();
  }else{
    cverde();
  camarillo();
  crojo();
    }
  

}
