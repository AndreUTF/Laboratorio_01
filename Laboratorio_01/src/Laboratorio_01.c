#include <stdint.h>
#include <stdbool.h>
// includes da biblioteca driverlib
#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"
#include "driverlib/sysctl.h"
#include "driverlib/systick.h"

uint8_t LED_D4 = 0;

void SysTick_Handler(void){
    //
} // SysTick_Handler

void main(void){
  SysTickPeriodSet(12000000); // f = 1Hz para clock = 24MHz

  SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF); // Habilita GPIO F (LED D4 = PF0)
  while(!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF)); // Aguarda final da habilitação
    
  GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_0); // LED D4 como saída
  GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_0, 0); // LEDs D4 apagados
  GPIOPadConfigSet(GPIO_PORTF_BASE, GPIO_PIN_0, GPIO_STRENGTH_12MA, GPIO_PIN_TYPE_STD);
    
  SysTickIntEnable();
  SysTickEnable();
  
  //Counter
  float counter = 0;
  
  //Frequencia de operação
  float frequencia = SysTickValueGet();
  
  //Constatnte contagem
  float counterlimit = 12000000;
  
  while(1){
    if(counter >= counterlimit)
    {
      GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_0, LED_D4);
      LED_D4 ^= GPIO_PIN_0; // Troca estado do LED D4
      counter = 0;
    }
    else
    {
      counter++;
    }
  } // while
} // main