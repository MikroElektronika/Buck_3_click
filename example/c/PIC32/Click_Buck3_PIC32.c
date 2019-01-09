/*
Example for Buck3 Click

    Date          : Jan 2018.
    Author        : MikroE Team

Test configuration PIC32 :
    
    MCU                : P32MX795F512L
    Dev. Board         : EasyPIC Fusion v7
    PIC32 Compiler ver : v4.0.0.0

---
Description :

The demo application is composed of three sections :

- System Initialization - Initializes CS pin as INPUT and RST pin as OUTPUT.
- Application Initialization - Initializes Driver init and puts the device in ACTIVE mode.
- Application Task - (code snippet) - Sequentialy, each one second, checks the status of the 
  Buck 3 Click and if the overvoltage detected or device is under thermal shutdown 
  it logs a message on the USBUART.
  Note: Open Drain Power Good Indicator, it is asserted low if output voltage is out of PGOOD threshold, 
  Overvoltage or if the device is under thermal shutdown, EN shutdown or during soft start.
  Once the FB pin voltage is between 93% and 107% of the internal reference voltage (VREF) the PGOOD is pulled high.

*/

#include "Click_Buck3_types.h"
#include "Click_Buck3_config.h"

uint8_t statePG;

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_INPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
    mikrobus_logInit( _LOG_USBUART_A, 9600 );
	mikrobus_logWrite( "Initializing...", _LOG_LINE );
    Delay_ms( 100 );
}

void applicationInit()
{
     buck3_gpioDriverInit( (T_BUCK3_P)&_MIKROBUS1_GPIO );
     buck3_enable( _BUCK3_ACTIVE );
	 mikrobus_logWrite( "Buck 3 is activated", _LOG_LINE );
     Delay_1sec();
}

void applicationTask()
{
    statePG = buck3_getState();
	
    if (statePG == 0)
    {
        mikrobus_logWrite( "Overvoltage or thermal shutdown detected", _LOG_LINE );
    }
	Delay_1sec();
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
        applicationTask();
    }
}