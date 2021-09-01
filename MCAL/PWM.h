/*Error definitions*/
/*config structure definition*/
/*duty cycles enum*/

uint8_t PWM_init(St_PWM_config_t* configs);
void PWM_start(EN_dutyCycle_t dutyCycle);
void PWM_stop();
