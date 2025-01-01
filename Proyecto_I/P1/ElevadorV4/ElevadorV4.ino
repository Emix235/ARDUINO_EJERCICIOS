//En esta version del Elevador se implementa la funcion de Movimiento del mismo
///////Definimos Variables////////////
/////////LEDS//////////////////////
#define PA 5
#define PB 4
#define PC 3
#define PD 2
#define SOS 6
////////////////Botones////////
#define Bsos 8
#define BA 9
#define BB 10
#define BC 11
#define BD 12

///////////////Variables///////
int Psos=0; //Boton SOS presionado
int Pa=0;
int Pb=0;
int Pc=0;
int Pd=0;
int piso=0;//Variable para nuestro switch
///Variables para el Movimiento//
int res=0;
int estadoAC=1;
int estadoAX=1;
void setup() {
 ///////////////LEDS/////////////
pinMode(PA,OUTPUT);
pinMode(PB,OUTPUT);
pinMode(PC,OUTPUT);
pinMode(PD,OUTPUT);
pinMode(SOS,OUTPUT);
//////////////BOTONES//////////
pinMode(Bsos,INPUT);
pinMode(BA,INPUT);
pinMode(BB,INPUT);
pinMode(BC,INPUT);
pinMode(BD,INPUT);

}

void loop() {

 ///////ENCENDER ESTADO ACTUAL///////
 switch(estadoAC){
    case 1:
    digitalWrite(PA,HIGH);
      break;
      case 2:
      digitalWrite(PB,HIGH);
      break;
      case 3:
      digitalWrite(PC,HIGH);
      break;
      case 4:
      digitalWrite(PD,HIGH);
      break;
    }
 
////////LECTURA BOTONES//////
Pa=digitalRead(BA);
 if (Pa==1){
  piso=1;
  }
 Pb=digitalRead(BB);
  if (Pb==1){
  piso=2;
  }
   Pc=digitalRead(BC);
  if (Pc==1){
  piso=3;
  }
   Pd=digitalRead(BD);
  if (Pd==1){
  piso=4;
  }
   Psos=digitalRead(Bsos);
  if (Psos==1){
  piso=5;
  }
//////////////////SWITCH///////
  
 switch(piso){
  case 1:

    break;
    case 2:
digitalWrite (PB,HIGH);
      break;
        case 3:
   
        break;
          case 4:
          PISO4(piso,res,estadoAC);
          digitalWrite(SOS,HIGH);
          piso=0;
            break;
              case 5:
   digitalWrite(SOS,HIGH);
                break;
        default:
        break;
  }

}



////FUNCION PANICO/////
////FUNCION PISOS/////
int PISO1 (int piso,int res,int estadoAC){
   switch(piso){
    
    
    
    
   }
  return estadoAC;
  }
 int PISO4 (int piso,int res,int estadoAC){
   switch(estadoAC){
    case 1:
      digitalWrite(PB,HIGH);
              delay(2000);
              digitalWrite(PA,LOW);
              delay(2000);
              digitalWrite(PC,HIGH);
              delay(2000);
              digitalWrite(PB,LOW);
              delay(2000);
              digitalWrite(PD,HIGH);
              delay(2000);
              digitalWrite(PC,LOW);
              digitalWrite(PD,LOW);
      break;
        case 2:
        
          break;
            case 3:
            digitalWrite(PD,HIGH);
            delay(2000);
            digitalWrite(PC,LOW);
            delay(2000);
     
              break;
              case 4:
              digitalWrite(PD,HIGH);
              delay(2000);
              digitalWrite(PD,LOW);
              delay(2000);
              digitalWrite(PD,HIGH);
              delay(2000);
              digitalWrite(PD,LOW);
              delay(2000);
              digitalWrite(PD,HIGH);
              
                break;
                default:
                  break;
    
   }
    estadoAC=4;
      piso=0;
  return estadoAC;
  }
