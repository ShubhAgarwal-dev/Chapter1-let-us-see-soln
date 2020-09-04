#include "stdio.h"
int main(int argc, char const *argv[])
{
  /* Paper Size Questions */
  float q,w,e,r,t,y,u,i,o,p;
  q=1189;
  w=841;
  e=q/2;
  r=w/2;
  t=e/2;
  y=r/2;
  u=t/2;
  i=y/2;
  o=u/2;
  p=i/2;
  printf("All length are given in mm\n");
  printf("size of A0 sheet is %f by %f\n",q,w);
  printf("size of A1 sheet is %f by %f\n",w,e);
  printf("size of A2 sheet is %f by %f\n",e,r);
  printf("size of A3 sheet is %f by %f\n",r,t);
  printf("size of A4 sheet is %f by %f\n",t,y);
  printf("size of A5 sheet is %f by %f\n",y,u);
  printf("size of A6 sheet is %f by %f\n",u,i);
  printf("size of A7 sheet is %f by %f\n",i,o);
  printf("size of A8 sheet is %f by %f\n",o,p);
  return 0;
}
