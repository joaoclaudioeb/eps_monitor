/**
 * @file vigilant_companion.h
 *
 * @brief This is the header file for the class for the module's testing and configuration.
 *
 * \author João Cláudio Elsen Barcellos <joao.barcellos@posgrad.ufsc.br>
 * \version 0.0.0
 *
 * \date 12/11/2023
 */

#ifndef VIGILANT_COMPANION_H_
#define VIGILANT_COMPANION_H_

#include "adc_module.h"
#include "gpio_module.h"
#include "uart_module.h"

#define BUS_1V65 2048

class GPIOModule; // Declaração antecipada da classe A
class ADCModule; // Declaração antecipada da classe B
class UARTModule;

class VigilantCompanion{
public:
    int setupAndVerifyGPIOModule(GPIOModule& gpio);
    int setupAndVerifyUARTModule(UARTModule& uart);
    int setupAndVerifyADCModule(ADCModule* adc);
};

#endif /* VIGILANT_COMPANION_H_ */
