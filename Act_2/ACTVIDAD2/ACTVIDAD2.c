#include <stdio.h>
#include "pico/stdlib.h"

/**
 * @brief Programa principal
*/
int main(void) {
    int boton1;
  // Inicializo el USB
  stdio_init_all();
  // Demora para esperar la conexion
  sleep_ms(1000);

  // Inicializacion de GPIO con gpio_init()
  gpio_init(11);
  gpio_init(8);
  gpio_set_dir(11,GPIO_IN);
  gpio_set_dir(8,GPIO_OUT);



  /* Habilito el GPIO25 (LED)
  gpio_init(PICO_DEFAULT_LED_PIN);
  GPIO25 como salida
  gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
  Configuracion de entrada/salida con gpio_set_dir()

  */


  while (true) {
    boton1=gpio_get(11);
    if (boton1==1){
        gpio_put(8,1);

    }
    if(boton1==0){
        gpio_put(8,0);


    }
    /* Prendo LED
    gpio_put(PICO_DEFAULT_LED_PIN, 1);

    */

    // Resolver logica para GPIO20 -> GPIO6

    // Resolver logica para GPIO21 -> GPIO7

    // Resolver logica para GPIO22 -> GPIO8

  }
  return 0;
}