/* MODE 1 */
uint8_t DIO_init(ST_DIO_Config_t* configs)
{
  /*Check config inputs if they are valid*/
  /*return error type if not valid*/
  /*otherwise set the registers with the config and return 1*/
}
uint8_t DIO_write(EN_ports_t port,EN_pins_t pin,uint8_t data )
{
  /* check validity of data*/
  /*return error type if not valid*/
}
void DIO_set(EN_ports_t port,EN_pins_t pin)
{

}
void DIO_clear(EN_ports_t port,EN_pins_t pin)
{

}
uint8_t DIO_get(EN_ports_t port,EN_pins_t pin)
{

}
void DIO_toggle(EN_ports_t port,EN_pins_t pin)
{

}

/*MODE 0*/

uint8_t DIO_init(ST_DIO_Config_t* configs)
{
  /*Check config inputs if they are valid*/
  /*return error type if not valid*/
  /*otherwise set the registers with the config and return 1*/
}
uint8_t DIO_write(EN_pins_t pin,uint8_t data )
{
  /* check validity of data*/
  /*return error type if not valid*/
}
void DIO_set(EN_pins_t pin)
{

}
void DIO_clear(EN_pins_t pin)
{

}
uint8_t DIO_get(EN_pins_t pin)
{

}
void DIO_toggle(EN_pins_t pin)
{

}
