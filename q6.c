#include <stdio.h>
int main()
{
	/*Interchange Value*/
	int c,d;
	printf("Enter values of C and D:");
	scanf("%d %d",&c,&d);
	c ^= d;
	d ^= c;
	c ^= d;
	printf("Value of C=%d and value of D=%d\n",c,d);
	return 0;
}



