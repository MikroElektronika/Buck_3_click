![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# Buck3 Click

- **CIC Prefix**  : BUCK3
- **mikroSDK**    : YES
- **Author**      : MikroE Team

---

### Software Support

We provide a library for the Buck 3 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2303/buck-3-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

Library carries only two functions needed for control over the Buck 3 Click board.

Key functions :

- ``` uint8_t buck3_getState( void ) ``` - Checks the Power Good Indicator.
- ``` void buck3_enable( uint8_t state ) ``` - Puts the device in working mode (enable).

**Examples Description**

The demo application is composed of three sections :

- System Initialization - Initializes CS pin as INPUT and RST pin as OUTPUT.
- Application Initialization - Initializes Driver init and puts the device in ACTIVE mode.
- Application Task - (code snippet) - Sequentialy, each one second, checks the status of the 
  Buck 3 Click and if the overvoltage detected or device is under thermal shutdown 
  it logs a message on the USBUART.
  Note: Open Drain Power Good Indicator, it is asserted low if output voltage is out of PGOOD threshold, 
  Overvoltage or if the device is under thermal shutdown, EN shutdown or during soft start.
  Once the FB pin voltage is between 93% and 107% of the internal reference voltage (VREF) the PGOOD is pulled high.

```.c
void applicationTask()
{
    statePG = buck3_getState();
	
    if (statePG == 0)
    {
        mikrobus_logWrite( "Overvoltage or thermal shutdown detected", _LOG_LINE );
        Delay_1sec();
    }
}
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2303/buck-3-click) page.

mikroE Libraries used in the example:

- UART

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
### Architectures Supported

#### mikroC

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroBasic

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroPascal

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

---
---
