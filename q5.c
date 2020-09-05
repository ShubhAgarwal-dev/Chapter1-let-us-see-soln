#include <stdio.h>
int main(int argc, char const *argv[])
{
  /*Author shubh*/
  float q,w,e,r,t,y,u;
  printf("tell length,bredth of rectangle and tell radius of circle\n");
  scanf("%f %f %f",&q,&w,&e );
  r=2*q +2*w;
  t=q*w;
  y=3.1416*2*e;
  u=3.1416*e*e;
  printf("Perimeter of rectangle is %f and its area is %f\n",r,t );
  printf("Circumference of circle of radius %f is %f and its area is %f\n",e,y,u );
  return 0;
}
