/****************Layer:HAL********************/
/****************Author:Mohamed Shalpy******************/
/****************Version:01********************/
/****************Date:15/9/2023****************/
/****************Component:LED*****************/
#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_


#define SOURCE  1
#define SINK    0
typedef struct
{
	u8 connection;
	u8 port_con;
	u8 pin_con;
}LED_type;

void LED_voidON(LED_type Copy_LED_type);
void LED_voidOFF(LED_type Copy_LED_type);





#endif
