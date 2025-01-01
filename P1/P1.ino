int e1=0;
int e2=0;
int e3=0;
int e4=0;

int vi=1;
int SG=1;
void setup() {
  
  pinMode(1, INPUT_PULLUP); // boton 1, declaramos al boton como dato de entrada
  pinMode(0, OUTPUT); //led 1, declaramos al led como dato de salida
  pinMode(3, INPUT_PULLUP);  // boton 2
  pinMode(2, OUTPUT); //led 2
  pinMode(9, INPUT_PULLUP);  // boton 3
  pinMode(10, OUTPUT);  //led 3
  pinMode(11, INPUT_PULLUP);  // boton 4
  pinMode(12, OUTPUT);  // led 4

  //Leds de la puerta
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);  //ROJO
  pinMode(7, OUTPUT);
}

void loop() {
  
  e1 = digitalRead(1);
  e2 = digitalRead(3);
  e3 = digitalRead(9);
  e4 = digitalRead(11);
  
  if(vi==1){
    digitalWrite(0,1);
    digitalWrite(7,1);
  }
  if(e1==0){
    if(SG!=1){
    d1();
    F1(SG);
    d2();
    e1=1;
    vi=0;    
    }else{
    e1=1; 
    vi=0; 
    }
  }
  
  
  if(e2==0){
  if(SG!=2){
  d1();
  F2(SG);
  d2();
  e2=1;
  vi=0; 
    }else{
    e2=1; 
    vi=0; 
    } 
  }

  
  if(e3==0){
  if(SG!=3){
    d1();
  F3(SG);
  d2();
  e3=1;
  vi=0; 
    }else{
    e3=1; 
    vi=0; 
    } 
  }
  
  if(e4==0){
  if(SG!=4){
    d1();
  F4(SG);
  d2();
  e4=1;
  vi=0;
    }else{
    e4=1; 
    vi=0; 
    }   
  }
}

void F1(int ld){
switch(ld){
  case 2:
  for(int i=0;i<5;i++){
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
  }
  digitalWrite(2,0);
  delay(20);
  digitalWrite(0,1);
  SG=1;
  break;
  case 3:
  for(int i=0;i<5;i++){
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
  }
  digitalWrite(10,0);
  delay(20);
  digitalWrite(2,1);
  delay(1000);
  for(int i=0;i<5;i++){
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
  }
  digitalWrite(2,0);
  digitalWrite(0,1);
  SG=1;
  break;
  case 4:
  for(int i=0;i<5;i++){
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
  }
  digitalWrite(12,0);
  delay(20);
  digitalWrite(10,1);
  delay(1000);
  for(int i=0;i<5;i++){
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
  }
  digitalWrite(10,0);
  delay(20);
  digitalWrite(2,1);
  delay(1000);
  for(int i=0;i<5;i++){
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
  }
  digitalWrite(2,0);
  delay(20);
  digitalWrite(0,1);
  SG=1;
  break;
}}

void F2(int ld){
switch(ld){
  case 1:
  for(int i=0;i<5;i++){
    digitalWrite(0,HIGH);
    delay(100);
    digitalWrite(0,LOW);
    delay(100);
  }
  digitalWrite(0,0);
  delay(20);
  digitalWrite(2,1);
  SG=2;
  break;
  case 3:
  for(int i=0;i<5;i++){
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
  }
  digitalWrite(10,0);
  delay(20);
  digitalWrite(2,1);
  SG=2;
  break;
  case 4:
  for(int i=0;i<5;i++){
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
  }
  digitalWrite(12,0);
  delay(20);
  digitalWrite(10,1);
  delay(1000);
  for(int i=0;i<5;i++){
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
  }
  digitalWrite(10,0);
  delay(20);
  digitalWrite(2,1);
  SG=2;
  break;
}}


void F3(int ld){
switch(ld){
  case 1:
  for(int i=0;i<5;i++){
    digitalWrite(0,HIGH);
    delay(100);
    digitalWrite(0,LOW);
    delay(100);
  }
  digitalWrite(0,0);
  delay(20);
  digitalWrite(2,1);
  delay(1000);
  for(int i=0;i<5;i++){
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
  }
  digitalWrite(2,0);
  delay(20);
  digitalWrite(10,1);
  SG=3;
  break;
  case 2:
  for(int i=0;i<5;i++){
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
  }
  digitalWrite(2,0);
  delay(20);
  digitalWrite(10,1);
  SG=3;
  break;
  case 4:
  for(int i=0;i<5;i++){
    digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
  }
  digitalWrite(12,0);
  delay(20);
  digitalWrite(10,1);
  SG=3;
  break;
}}


void F4(int ld){
switch(ld){
  case 1:
  for(int i=0;i<5;i++){
    digitalWrite(0,HIGH);
    delay(100);
    digitalWrite(0,LOW);
    delay(100);
  }
  digitalWrite(0,0);
  delay(20);
  digitalWrite(2,1);
  delay(1000);
  for(int i=0;i<5;i++){
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
  }
  digitalWrite(2,0);
  delay(20);
  digitalWrite(10,1);
  delay(1000);
  for(int i=0;i<5;i++){
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
  }
  digitalWrite(10,0);
  delay(20);
  digitalWrite(12,1);
  SG=4;
  break;
  case 2:
  for(int i=0;i<5;i++){
    digitalWrite(2,HIGH);
    delay(100);
    digitalWrite(2,LOW);
    delay(100);
  }
  digitalWrite(2,0);
  delay(20);
  digitalWrite(10,1);
  delay(1000);
  for(int i=0;i<5;i++){
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
  }
  digitalWrite(10,0);
  delay(20);
  digitalWrite(12,1);
  SG=4;
  break;
  case 3:
  for(int i=0;i<5;i++){
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
  }
  digitalWrite(10,0);
  delay(20);
  digitalWrite(12,1);
  SG=4;
  break;
}}

void puerta(){
  delay(900);  
  digitalWrite(6,1);
  delay(1000);
  digitalWrite(6,0);
  digitalWrite(7,1);
  delay(1000);
  digitalWrite(7,0);
  digitalWrite(5,1);
  delay(1000);
  digitalWrite(5,0);
  digitalWrite(7,1);
  delay(1000);
  digitalWrite(7,0);
  digitalWrite(6,1);
  /*delay(1000);
  digitalWrite(6,0);*/
}
void d1(){
  delay(800);  
  digitalWrite(7,0);
  digitalWrite(5,1);
  delay(1000);
  digitalWrite(5,0);
  digitalWrite(6,1);
}
void d2(){
  delay(800);  
  digitalWrite(6,0);
  digitalWrite(5,1);
  delay(1000);
  digitalWrite(5,0);
  digitalWrite(7,1);
}
