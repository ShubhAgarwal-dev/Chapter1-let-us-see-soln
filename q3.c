#include <stdio.h>
int main(int argc, char const *argv[])
{
  float q,w,e,r,t,y,u;
  printf("please input your marks\n");
  scanf("%f %f %f %f %f",&q,&w,&e,&r,&t );
  y=q+w+e+r+t;
  u=y/5;
  printf("Your total marks are %f and percentage marks are %f\n",y,u );
  /* code */
  return 0;
}
