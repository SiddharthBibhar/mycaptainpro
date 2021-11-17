#include<stdio.h>
int main()
{
	int a=4,b=6;
	printf("Before swapping a=%d b=%d\n",a,b);
	a=a+b;//a=10(4+6)
	b=a-b;//b=4(10-6)
	a=a-b;//a=6(10-4)
	printf("After swapping a=%d b=%d",a,b);
	return 0;
	
	
}
