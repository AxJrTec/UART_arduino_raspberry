#include <Arduino.h>
#include <util/delay.h>

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("Una vez un barco quiso navegar");
    _delay_ms(1000);
    Serial.println("Su nombre era la tetera del mar");
    _delay_ms(1000);
    Serial.println("El viento soplo y su proa hundio");
    _delay_ms(1000);
    Serial.println("Remar, chicos, a remar");
    _delay_ms(1000);
    Serial.println("Pronto el ballenero vendra");
    _delay_ms(1000);
    Serial.println("Y azucar, y te, y ron traera");
    _delay_ms(1000);
    Serial.println("Cuando cese nuestro cantar");
    _delay_ms(1000);
}