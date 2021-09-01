

/*
Error defines
-1 for undefined pin
-2 for undefined port
-3 for unsupported data
*/


/* If mode == 1 */

/*Config structure definition*/
/* enum pins */
/* enum ports */
uint8_t DIO_init(ST_DIO_Config_t* configs);
uint8_t DIO_write(EN_ports port,EN_pins pin,uint8_t data );
uint8_t DIO_set(EN_ports port,EN_pins pin);
uint8_t DIO_clear(EN_ports port,EN_pins pin);
uint8_t DIO_get(EN_ports port,EN_pins pin);
uint8_t DIO_toggle(EN_ports port,EN_pins pin);
/*if mode == 0 */

/*Config structure definition*/
/* enum pins */
uint8_t DIO_init(ST_DIO_Config_t* configs);
uint8_t DIO_write(EN_pins pin,uint8_t data );
uint8_t DIO_set(EN_pins pin);
uint8_t DIO_clear(EN_pins pin);
uint8_t DIO_get(EN_pins pin);
uint8_t DIO_toggle(EN_pins pin);
