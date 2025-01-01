int e1=0;
int e2=0;
int e3=0;
int e4=0;

int vi=1;
int SG=1;
void setup() {
  
  pinMode(1, INPUT); // boton 1, declaramos al boton como dato de entrada
  pinMode(0, OUTPUT); //led 1, declaramos al led como dato de salida
  pinMode(3, INPUT);  // boton 2
  pinMode(2, OUTPUT); //led 2
  pinMode(9, INPUT);  // boton 3
  pinMode(10, OUTPUT);  //led 3
  pinMode(11, INPUT);  // boton 4
  pinMode(12, OUTPUT);  // led 4

}

void loop() {
  
  e1 = digitalRead(1);
  e2 = digitalRead(3);
  e3 = digitalRead(9);
  e4 = digitalRead(11);
  
  if(vi==1){
    digitalWrite(0,1);
  }
  if(e1==1){
    if(SG!=1){  //Si al oprimir al boton, la luz no se encuentra en el mismo piso
    //puerta();
    F1(SG);
    e1=0;
    vi=0;    
    }else{  // Si la luz se enuentra en el mismo piso donde oprimimos el boton
    e1=0;  
    }
  }
  
  
  if(e2==1 ){
  if(SG!=2){ //Si al oprimir al boton, la luz no se encuentra en el mismo piso
  //puerta();
  F2(SG);
  e2=0;
  vi=0; 
    }else{ // Si la luz se enuentra en el mismo piso donde oprimimos el boton
    e2=0; 
    vi=0; 
    } 
  }

  
  if(e3==1 ){
  if(SG!=3){ //Si al oprimir al boton, la luz no se encuentra en el mismo piso
  //puerta();
  F3(SG);
  e3=0;
  vi=0; 
    }else{ // Si la luz se enuentra en el mismo piso donde oprimimos el boton
    e3=0; 
    vi=0; 
    } 
  }
  
  if(e4==1 ){
  if(SG!=4){ //Si al oprimir al boton, la luz no se encuentra en el mismo piso
  //puerta();
  F4(SG);
  e4=0;
  vi=0;
    }else{  // Si la luz se enuentra en el mismo piso donde oprimimos el boton
    e4=0; 
    vi=0; 
    }   
  }
}

void F1(int ld){  //Funcion que aplica al primer boton
switch(ld){
  case 2:  //En el caso de que oprimamos el boton 1, la luz se movera de piso 2 a piso 1
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
  case 3:  //En el caso de que oprimamos el boton 1, la luz se movera de piso 3 a piso 1
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
  case 4: //En el caso de que oprimamos el boton 1, la luz se movera de piso 4 a piso 1
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

void F2(int ld){  //Funcion que aplica al segundo boton
switch(ld){
  case 1: //En el caso de que oprimamos el boton 2, la luz se movera de piso 1 a piso 2
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
  case 3:  //En el caso de que oprimamos el boton 2, la luz se movera de piso 3 a piso 2
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
  case 4:  //En el caso de que oprimamos el boton 2, la luz se movera de piso 4 a piso 2
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


void F3(int ld){  //Funcion que aplica al tercer boton
switch(ld){
  case 1:  //En el caso de que oprimamos el boton 3, la luz se movera de piso 1 a piso 3
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
  case 2: //En el caso de que oprimamos el boton 3, la luz se movera de piso 2 a piso 3
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
  case 4: //En el caso de que oprimamos el boton 3, la luz se movera de piso 4 a piso 3
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


void F4(int ld){  //Funcion que aplica al cuarto boton
switch(ld){
  case 1:  //En el caso de que oprimamos el boton 4, la luz se movera de 4 a 1
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
  case 2:  //En el caso de que oprimamos el boton 4, la luz se movera de piso 4 a piso 2
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
  case 3: //En el caso de que oprimamos el boton 4, la luz se movera de piso 4 a piso 3
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

void puerta(){  //La animaci{on de los leds verdes y rojos vienen de esta función
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
