#include <stdio.h>

int main(int argc, char const *argv[])
{
  /* temp converter */
  printf("please enter temperature in farenhiet:\n");
  float t,h;
  scanf("%f",&t );
  h=5*t/9 -17.7778;
  printf("given temperature in celcius is %f\n",h );
  return 0;
}
