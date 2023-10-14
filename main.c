#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "util/delay.h"
#include "DIO_interface.h"
#include "CLCD_interface.h"
#include "LED_interface.h"
void main(void)
{

	DIO_voidSetPortDir(A,PORT_DIR_OUT);
	DIO_voidSetPortDir(B,PORT_DIR_OUT);
	DIO_voidSetPortDir(C,PORT_DIR_OUT);
	DIO_voidSetPinDir(D,PIN2,PIN_DIR_IN);
	DIO_voidSetPinVal(D,PIN2,PIN_VAL_HIGH);
	CLCD_voidInit();

	while(1)
	{
		DIO_voidSetPinVal(A,PIN0,PIN_VAL_HIGH);
		CLCD_voidSendString("GO");
		CLCD_voidSendPosition(2,0);
		_delay_ms(10000);
		DIO_voidSetPinVal(A,PIN0,PIN_VAL_LOW);

		CLCD_voidSendCommand(1);
		CLCD_voidSendPosition(2,0);
		CLCD_voidSendString("wait");

		DIO_voidSetPinVal(A,PIN1,PIN_VAL_HIGH);
		_delay_ms(500);
		DIO_voidSetPinVal(A,PIN1,PIN_VAL_LOW);
		_delay_ms(500);
		DIO_voidSetPinVal(A,PIN1,PIN_VAL_HIGH);
		_delay_ms(500);
		DIO_voidSetPinVal(A,PIN1,PIN_VAL_LOW);
		_delay_ms(500);
		DIO_voidSetPinVal(A,PIN1,PIN_VAL_HIGH);
		_delay_ms(500);
		DIO_voidSetPinVal(A,PIN1,PIN_VAL_LOW);
		DIO_voidSetPinVal(A,PIN1,PIN_VAL_HIGH);
		DIO_voidSetPinVal(A,PIN1,PIN_VAL_LOW);
		DIO_voidSetPinVal(A,PIN2,PIN_VAL_HIGH);
		CLCD_voidSendCommand(1);
		CLCD_voidSendPosition(2,0);
		CLCD_voidSendString("stop");

		_delay_ms(50000);
		DIO_voidSetPinVal(A,PIN2,PIN_VAL_LOW);
		CLCD_voidSendCommand(1);


	}
}
