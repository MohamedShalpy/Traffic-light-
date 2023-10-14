#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "LED_config.h"
#include "LED_interface.h"
#include "LED_private.h"



void LED_voidON(LED_type Copy_LED_type)
{
	if(Copy_LED_type.connection==SOURCE)
	{
		DIO_voidSetPinVal(Copy_LED_type.port_con,Copy_LED_type.pin_con,PIN_VAL_HIGH);
	}
	else if(Copy_LED_type.connection==SINK)
	{
		DIO_voidSetPinVal(Copy_LED_type.port_con,Copy_LED_type.pin_con,PIN_VAL_LOW);
	}

}
void LED_voidOFF(LED_type Copy_LED_type)
{
	if(Copy_LED_type.connection==SOURCE)
	{
		DIO_voidSetPinVal(Copy_LED_type.port_con,Copy_LED_type.pin_con,PIN_VAL_LOW);
	}
	else if(Copy_LED_type.connection==SINK)
	{
		DIO_voidSetPinVal(Copy_LED_type.port_con,Copy_LED_type.pin_con,PIN_VAL_HIGH);
	}

}
