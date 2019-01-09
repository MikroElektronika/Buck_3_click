/*
    __buck3_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __buck3_driver.h
@brief    Buck3 Driver
@mainpage Buck3 Click
@{

@image html sch.jpg

@}

@defgroup   BUCK3
@brief      Buck3 Click Driver
@{

| Global Library Prefix | **BUCK3** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Jan 2018.**      |
| Developer             | **MikroE Team**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _BUCK3_H_
#define _BUCK3_H_

/** 
 * @macro T_BUCK3_P
 * @brief Driver Abstract type 
 */
#define T_BUCK3_P    const uint8_t*

/** @defgroup BUCK3_COMPILE Compilation Config */              /** @{ */

//  #define   __BUCK3_DRV_SPI__                            /**<     @macro __BUCK3_DRV_SPI__  @brief SPI driver selector */
//  #define   __BUCK3_DRV_I2C__                            /**<     @macro __BUCK3_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __BUCK3_DRV_UART__                           /**<     @macro __BUCK3_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup BUCK3_VAR Variables */                           /** @{ */

extern const uint8_t _BUCK3_ACTIVE;
extern const uint8_t _BUCK3_SLEEP;


                                                                       /** @} */
/** @defgroup BUCK3_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup BUCK3_INIT Driver Initialization */              /** @{ */

#ifdef   __BUCK3_DRV_SPI__
void buck3_spiDriverInit(T_BUCK3_P gpioObj, T_BUCK3_P spiObj);
#endif
#ifdef   __BUCK3_DRV_I2C__
void buck3_i2cDriverInit(T_BUCK3_P gpioObj, T_BUCK3_P i2cObj, uint8_t slave);
#endif
#ifdef   __BUCK3_DRV_UART__
void buck3_uartDriverInit(T_BUCK3_P gpioObj, T_BUCK3_P uartObj);
#endif

void buck3_gpioDriverInit(T_BUCK3_P gpioObj);
                                                                       /** @} */
/** @defgroup BUCK3_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Function reads state of pin
 *
 * @return  state of pin
        1 - FB pin voltage is between 93% and 107% of the internal reference voltage (VREF).
        0 - Overvoltage detected or device is under thermal shutdown.
 */
uint8_t buck3_getState( void );

/**
 * @brief Function for setting chip mode
 *
 * @param[in] state     Turns device on or off
 *
 *  Mode options:
       ACTIVE mode - 1,
       SLEEP mode - 0.
 *
 */
void buck3_enable( uint8_t state );

                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_Buck3_STM.c
    @example Click_Buck3_TIVA.c
    @example Click_Buck3_CEC.c
    @example Click_Buck3_KINETIS.c
    @example Click_Buck3_MSP.c
    @example Click_Buck3_PIC.c
    @example Click_Buck3_PIC32.c
    @example Click_Buck3_DSPIC.c
    @example Click_Buck3_AVR.c
    @example Click_Buck3_FT90x.c
    @example Click_Buck3_STM.mbas
    @example Click_Buck3_TIVA.mbas
    @example Click_Buck3_CEC.mbas
    @example Click_Buck3_KINETIS.mbas
    @example Click_Buck3_MSP.mbas
    @example Click_Buck3_PIC.mbas
    @example Click_Buck3_PIC32.mbas
    @example Click_Buck3_DSPIC.mbas
    @example Click_Buck3_AVR.mbas
    @example Click_Buck3_FT90x.mbas
    @example Click_Buck3_STM.mpas
    @example Click_Buck3_TIVA.mpas
    @example Click_Buck3_CEC.mpas
    @example Click_Buck3_KINETIS.mpas
    @example Click_Buck3_MSP.mpas
    @example Click_Buck3_PIC.mpas
    @example Click_Buck3_PIC32.mpas
    @example Click_Buck3_DSPIC.mpas
    @example Click_Buck3_AVR.mpas
    @example Click_Buck3_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __buck3_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */