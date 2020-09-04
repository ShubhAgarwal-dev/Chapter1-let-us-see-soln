#include <stdio.h>
int main(int argc, char const *argv[])
{
  /* Cost price */
  printf("Enter total selling price of 15 items and total profit earned:");
  float a,b,c;
  scanf("%f %f",&a,&b);
  c=a/15-b/15;
  printf("So Cost price of 1 item is %f\n",c);
  return 0;
}
