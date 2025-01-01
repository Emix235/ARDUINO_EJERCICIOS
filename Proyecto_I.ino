int e=0;
int s=1;
void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT); //declaramos al boton como dato de entrada
  pinMode(4, OUTPUT); //declaramos al led como dato de salida

}

void loop() {
  // put your main code here, to run repeatedly:
  e= digitalRead(8);
  if(s==0){
    digitalWrite(4, HIGH);
   }else if(s==1){
    digitalWrite(4, LOW);
   }
  if(e == 1 ){
    if(s==1){
      digitalWrite(4, LOW);
      s--;
    }else {
      digitalWrite(4, HIGH);
      s++; 
    }}
}
