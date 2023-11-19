/**
 * @file gpio_module.h
 *
 * @brief This is the header file for the class for the GPIO module.
 *
 * \author João Cláudio Elsen Barcellos <joao.barcellos@posgrad.ufsc.br>
 * \version 0.0.0
 *
 * \date 12/11/2023
 */

#ifndef GPIO_MODULE_H_
#define GPIO_MODULE_H_

class VigilantCompanion;

// Máscaras de GPIO
#define GPIO_INIT_PINS 0x121603C0
#define GPIO_DIR_PINS 0x21603C0
#define GPIO_CONFIG_MASK 0x1FFFFFFE
#define ADC_PIN 28
#define LOAD_SEL_MASK 0x160000
#define BUS_SEL_MASK 0x3C0

// Enum para representar os diferentes modos de seleção do barramento
enum BusType {
    BUS_5V0 = (0x00 << 6),
    BUS_3V3 = (0x01 << 6),
    ANT_DEP = (0x02 << 6),
    BEACON = (0x03 << 6),
    OBDH = (0x04 << 6),
    PAYLOAD = (0x05 << 6),
    RADIO_MAIN = (0x06 << 6),
    RADIO_BEACON = (0x07 << 6),
    NONE = BUS_5V0
};

// Enum para representar as diferentes cargas
enum LoadType {
    DISABLE_LOAD = (0x00 << 17),
    FIRST_LOAD = (0x01 << 17),
    SECOND_LOAD = (0x02 << 17),
    THIRD_LOAD = (0x08 << 17)
};

class GPIOModule {
protected:   
    static int sErrorStatus; 
public:
    /**
     * \brief .
     *
     * \param[in] .
     *
     * \return .
     */
    friend class VigilantCompanion;
    /**
     * \brief .
     *
     * \param[in] .
     *
     * \return .
     */         
    GPIOModule();
    /**
     * \brief .
     *
     * \param[in] .
     *
     * \return .
     */         
    ~GPIOModule();
    /**
     * \brief .
     *
     * \param[in] .
     *
     * \return .
     */         
    void chooseBus(BusType bus);
    /**
     * \brief .
     *
     * \param[in] .
     *
     * \return .
     */
    void driveLoad(BusType bus);
    /**
     * \brief .
     *
     * \param[in] .
     *
     * \return .
     */
    void heartBeat();
};

#endif /* GPIO_MODULE_H_ */
