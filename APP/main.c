int main()
{
  
  Motion_init();
  speedGet_init();

  while(1)
  {
    Motion_update(speedGet_update());
  }

  return;
}
