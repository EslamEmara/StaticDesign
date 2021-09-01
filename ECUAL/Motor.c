

static uint8_t gspeed = 0;
EN_direction_t gdirection;

void Motor_init(St_MOTOR_config_t configs)
{
  PWM_init();
}
uint8_t SetMotorSpeed(uint8_t speed)
{
  /*check for speed validity*/
  /*return error type if found*/
  PWM_start(speed);
  gspeed = speed;
  /*return 1*/
}
void SetMotorDirection(EN_direction_t direction)
{
  /*set motor direciton as desired*/
  gdirection = direction;
}

uint8_t getMotorSpeed()
{
  return gSpeed;
}
EN_direction_t getMotorDirection()
{
  return gdirection;
}
