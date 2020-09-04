#include "stdio.h"
int main(int argc, char const *argv[])
{
  printf("Enter distance between any two cities\n");
  int h;
  scanf("%d",&h);
  float q,w,e,r;
  q=h*1000;
  w=q*100;
  e=w/2.54;
  r=e/12;
  printf("distance between cities is %f meter or %f centimeter or %f inch or % f feet\n",q,w,e,r);
  return 0;
}
