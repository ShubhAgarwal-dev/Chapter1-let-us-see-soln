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
	
	/* Other way of doing could be 
	 * c=c+d;
	 * d=c-d;
	 * c=c-d;
	 * it woluld too have interchanged the value*/
	printf("Value of C=%d and value of D=%d\n",c,d);
	return 0;
}



