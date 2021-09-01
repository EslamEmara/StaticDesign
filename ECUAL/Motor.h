/*define errors*/
/*define direction enum*/


void Motor_init(St_MOTOR_config_t configs);
uint8_t SetMotorSpeed(uint8_t speed);
void SetMotorDirection(EN_direction_t direction);
uint8_t getMotorSpeed();
EN_direction_t getMotorDirection();
