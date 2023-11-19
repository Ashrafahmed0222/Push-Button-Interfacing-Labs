/*


 * main.c
 *
 *  Created on: Feb 19, 2023
 *      Author: Ashraf Ahmed Hamed
 */

#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "DIO_interface.h"
#include "DIO_private.h"

#include "LED_interface.h"
#include "SW_interface.h"

#include <util/delay.h>

int main(void) {

	SW_TYPE SW0 = { DIO_PORTB, DIO_PIN0, SW_INT_PULL_UP };
	SW_TYPE SW1 = { DIO_PORTB, DIO_PIN1, SW_INT_PULL_UP };
	SW_TYPE SW2 = { DIO_PORTB, DIO_PIN2, SW_INT_PULL_UP };
	SW_TYPE SW3 = { DIO_PORTB, DIO_PIN3, SW_INT_PULL_UP };
	SW_TYPE SW4 = { DIO_PORTB, DIO_PIN4, SW_INT_PULL_UP };
	SW_TYPE SW5 = { DIO_PORTB, DIO_PIN5, SW_INT_PULL_UP };
	SW_TYPE SW6 = { DIO_PORTB, DIO_PIN6, SW_INT_PULL_UP };
	SW_TYPE SW7 = { DIO_PORTB, DIO_PIN7, SW_INT_PULL_UP };

	SW_voidInitial(SW0);
	SW_voidInitial(SW1);
	SW_voidInitial(SW2);
	SW_voidInitial(SW3);
	SW_voidInitial(SW4);
	SW_voidInitial(SW5);
	SW_voidInitial(SW6);
	SW_voidInitial(SW7);

	SW_voidEnableIternalPullUp(SW0);
	SW_voidEnableIternalPullUp(SW1);
	SW_voidEnableIternalPullUp(SW2);
	SW_voidEnableIternalPullUp(SW3);
	SW_voidEnableIternalPullUp(SW4);
	SW_voidEnableIternalPullUp(SW5);
	SW_voidEnableIternalPullUp(SW6);
	SW_voidEnableIternalPullUp(SW7);

	LED_CONF LED0 = { LED_PORTA, LED_PIN0, ACTIVE_HIGH };
	LED_CONF LED1 = { LED_PORTA, LED_PIN1, ACTIVE_HIGH };
	LED_CONF LED2 = { LED_PORTA, LED_PIN2, ACTIVE_HIGH };
	LED_CONF LED3 = { LED_PORTA, LED_PIN3, ACTIVE_HIGH };
	LED_CONF LED4 = { LED_PORTA, LED_PIN4, ACTIVE_HIGH };
	LED_CONF LED5 = { LED_PORTA, LED_PIN5, ACTIVE_HIGH };
	LED_CONF LED6 = { LED_PORTA, LED_PIN6, ACTIVE_HIGH };
	LED_CONF LED7 = { LED_PORTA, LED_PIN7, ACTIVE_HIGH };

	LED_voidInIt(LED0);
	LED_voidInIt(LED1);
	LED_voidInIt(LED2);
	LED_voidInIt(LED3);
	LED_voidInIt(LED4);
	LED_voidInIt(LED5);
	LED_voidInIt(LED6);
	LED_voidInIt(LED7);
	while (1) {
		if (SW_u8getPressed(SW0) == 1) {
			for (int i = 0; i < 2; i++) {
				LED_voidToggle(LED0);
				LED_voidToggle(LED1);
				LED_voidToggle(LED2);
				LED_voidToggle(LED3);
				LED_voidToggle(LED4);
				LED_voidToggle(LED5);
				LED_voidToggle(LED6);
				LED_voidToggle(LED7);

				_delay_ms(1000);

			}
			DIO_enumSetPortValue(DIO_PORTA, 0);

		}

		else if (SW_u8getPressed(SW1) == 1) {

			for (int i = 0; i < 2; i++) {
				LED_voidON(LED7);
				LED_voidOFF(LED0);
				_delay_ms(250);
				LED_voidON(LED6);
				LED_voidOFF(LED7);
				_delay_ms(250);
				LED_voidON(LED5);
				LED_voidOFF(LED6);
				_delay_ms(250);
				LED_voidON(LED4);
				LED_voidOFF(LED5);
				_delay_ms(250);
				LED_voidON(LED3);
				LED_voidOFF(LED4);
				_delay_ms(250);
				LED_voidON(LED2);
				LED_voidOFF(LED3);
				_delay_ms(250);
				LED_voidON(LED1);
				LED_voidOFF(LED2);
				_delay_ms(250);
				LED_voidON(LED0);
				LED_voidOFF(LED1);
				_delay_ms(250);

			}
			DIO_enumSetPortValue(DIO_PORTA, 0);

		}

		else if (SW_u8getPressed(SW2) == 1) {
			for (int i = 0; i < 2; i++) {
				LED_voidON(LED0);
				LED_voidOFF(LED7);
				_delay_ms(250);
				LED_voidON(LED1);
				LED_voidOFF(LED0);
				_delay_ms(250);
				LED_voidON(LED2);
				LED_voidOFF(LED1);
				_delay_ms(250);
				LED_voidON(LED3);
				LED_voidOFF(LED2);
				_delay_ms(250);
				LED_voidON(LED4);
				LED_voidOFF(LED3);
				_delay_ms(250);
				LED_voidON(LED5);
				LED_voidOFF(LED4);
				_delay_ms(250);
				LED_voidON(LED6);
				LED_voidOFF(LED5);
				_delay_ms(250);
				LED_voidON(LED7);
				LED_voidOFF(LED6);
				_delay_ms(250);

			}
			DIO_enumSetPortValue(DIO_PORTA, 0);

		}

		else if (SW_u8getPressed(SW3) == 1) {
			for (int i = 0; i < 2; i++) {
				LED_voidOFF(LED0);
				LED_voidOFF(LED7);
				LED_voidON(LED3);
				LED_voidON(LED4);
				_delay_ms(250);

				LED_voidOFF(LED4);
				LED_voidOFF(LED3);
				LED_voidON(LED2);
				LED_voidON(LED5);
				_delay_ms(250);
				LED_voidOFF(LED5);
				LED_voidOFF(LED2);
				LED_voidON(LED1);
				LED_voidON(LED6);
				_delay_ms(250);
				LED_voidOFF(LED1);
				LED_voidOFF(LED6);
				LED_voidON(LED0);
				LED_voidON(LED7);
				_delay_ms(250);

			}
			DIO_enumSetPortValue(DIO_PORTA, 0);

		}

		else if (SW_u8getPressed(SW4) == 1) {
			for (int i = 0; i < 2; i++) {
				LED_voidOFF(LED3);
				LED_voidOFF(LED4);
				LED_voidON(LED0);
				LED_voidON(LED7);
				_delay_ms(250);

				LED_voidOFF(LED0);
				LED_voidOFF(LED7);
				LED_voidON(LED1);
				LED_voidON(LED6);
				_delay_ms(250);
				LED_voidOFF(LED1);
				LED_voidOFF(LED6);
				LED_voidON(LED2);
				LED_voidON(LED5);
				_delay_ms(250);
				LED_voidOFF(LED2);
				LED_voidOFF(LED5);
				LED_voidON(LED3);
				LED_voidON(LED4);
				_delay_ms(250);

			}
			DIO_enumSetPortValue(DIO_PORTA, 0);

		}

		else if (SW_u8getPressed(SW5) == 1) {

			for (int i = 0; i < 2; i++) {

				LED_voidOFF(LED2);
				LED_voidOFF(LED5);
				LED_voidOFF(LED1);
				LED_voidOFF(LED6);
				LED_voidON(LED3);
				LED_voidON(LED4);
				LED_voidON(LED0);
				LED_voidON(LED7);
				_delay_ms(250);

				LED_voidOFF(LED4);
				LED_voidOFF(LED3);
				LED_voidOFF(LED0);
				LED_voidOFF(LED7);
				LED_voidON(LED2);
				LED_voidON(LED5);
				LED_voidON(LED1);
				LED_voidON(LED6);

				_delay_ms(250);

			}
			DIO_enumSetPortValue(DIO_PORTA, 0);

		}

		else if (SW_u8getPressed(SW6) == 1) {
			for (int i = 0; i < 2; i++) {
				LED_voidOFF(LED1);
				LED_voidOFF(LED2);
				LED_voidOFF(LED3);
				LED_voidOFF(LED4);
				LED_voidOFF(LED5);
				LED_voidOFF(LED6);
				LED_voidOFF(LED7);
				LED_voidON(LED0);
				_delay_ms(250);
				LED_voidON(LED1);
				_delay_ms(250);
				LED_voidON(LED2);
				_delay_ms(250);
				LED_voidON(LED3);
				_delay_ms(250);
				LED_voidON(LED4);
				_delay_ms(250);
				LED_voidON(LED5);
				_delay_ms(250);
				LED_voidON(LED6);
				_delay_ms(250);
				LED_voidON(LED7);
				_delay_ms(250);

			}
			DIO_enumSetPortValue(DIO_PORTA, 0);

		}

		else if (SW_u8getPressed(SW7) == 1) {

			for (int i = 0; i < 2; i++) {
				LED_voidON(LED0);
				LED_voidOFF(LED1);
				_delay_ms(250);
				LED_voidON(LED1);
				LED_voidOFF(LED0);
				_delay_ms(250);
				LED_voidON(LED2);
				LED_voidOFF(LED1);
				_delay_ms(250);
				LED_voidON(LED3);
				LED_voidOFF(LED2);
				_delay_ms(250);
				LED_voidON(LED4);
				LED_voidOFF(LED3);
				_delay_ms(250);
				LED_voidON(LED5);
				LED_voidOFF(LED4);
				_delay_ms(250);
				LED_voidON(LED6);
				LED_voidOFF(LED5);
				_delay_ms(250);
				LED_voidON(LED7);
				LED_voidOFF(LED6);
				_delay_ms(250);
				LED_voidON(LED6);
				LED_voidOFF(LED7);
				_delay_ms(250);
				LED_voidON(LED5);
				LED_voidOFF(LED6);
				_delay_ms(250);
				LED_voidON(LED4);
				LED_voidOFF(LED5);
				_delay_ms(250);
				LED_voidON(LED3);
				LED_voidOFF(LED4);
				_delay_ms(250);
				LED_voidON(LED2);
				LED_voidOFF(LED3);
				_delay_ms(250);
				LED_voidON(LED1);
				LED_voidOFF(LED2);
				_delay_ms(250);

			}
			DIO_enumSetPortValue(DIO_PORTA, 0);

		}

	}
	return 0;
}

