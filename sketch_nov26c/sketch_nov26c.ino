#include <Servo.h>
Servo edu; // Edu hace referencia a que estamos hablando de un servo, nombre del servo //


void setup() {
  // put your setup code here, to run once:
edu.attach ( 5 ); // esta funcion identifica en que pín tenemos que emitir la señal del servo //

}

void loop() {
  // put your main code here, to run repeatedly:
 edu.write (0); //cuantos grados queremos que se mueva el servo //
 delay (500); // manejar tiempos grandes con los servos, ya que poseen un motor y una caja de reduccion, y por darle un menor tiempo //
 // es como que puede "apurarse" y arruinar el circuito al requerir potencia

 edu.write (90); // ahora se va a los 90 grados //
 delay (500);

 edu.write (180);
 delay (500); // hay servos de 180 grados y de 360 grados //
 // pasar de 180 grados a 0 grados en los servos puede dar problemas, es decir, no es recomendable pasar de extremo a extremo //
 // es recomendable poner un grado intermedio ( en este caso 90 grados ) para que tenga como un stop o punto de freno //
}
