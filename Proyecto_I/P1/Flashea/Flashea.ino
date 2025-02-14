/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  //pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(7,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
     int a=0;
     digitalWrite(12,HIGH);   // turn the LED on (HIGH is the voltage level)
     delay(1000);
     digitalWrite(12,LOW);
     digitalWrite(10,HIGH); 
     delay(2000);
     for(a=0;a<5;a++){ 
     digitalWrite(10,HIGH);
     delay(100);
     digitalWrite(10,LOW);
     delay(100);
     }
     digitalWrite(10,LOW);
     digitalWrite(7,HIGH); 
     delay(2000);
     for(a=0;a<5;a++){
     digitalWrite(7,HIGH);
     delay(100);
     digitalWrite(7,LOW);
     delay(100); 
     }
     digitalWrite(7,LOW);
     
  /*for ( a=1; a < 10 ; a++ )
    {  
     digitalWrite(10,1);   // turn the LED on (HIGH is the voltage level)
     delay(1000);                       // wait for a second
     // wait for a second
    }*/

}
