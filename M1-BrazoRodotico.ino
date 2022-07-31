#include <Servo.h>    //añadimos la libreria para aser uso de los servomotores

Servo eje;    //creamos varios odjetos con las funciones de la libreria servomotor
Servo pinsa;
Servo codo;
Servo hombro;

void setup(){
  eje.attach(4);    //iniciamos los odjetos servomotores
  pinsa.attach(12);
  codo.attach(3);
  hombro.attach(13);
}

void loop(){    //en el loop asignamos valores de entre 0 y 180 provenientes de joistiks
 eje.write(map(analogRead(1),0,1023,0,180));   //Eje x de joistik 1
 pinsa.write(map(analogRead(2),0,1023,0,180));   //Eje Y de joistik 1
 codo.write(map(analogRead(3),0,1023,0,180));   //Eje x de joistik 2
 hombro.write(map(analogRead(4),0,1023,0,180));   //Eje Y de joistik 2
}
