#include<stdio.h>
int GetNOdigits(int);
void main(void)
{
	int num;
	printf("enter any number : ");
	scanf("%d",&num);
	printf("the number of digits in %d is %d",num,GetNOdigits(num));
}
int GetNOdigits(int num)
{
	int x = 0;
	for(;;)
	{
		num/=10;
		x++;
	    if ( num == 0)
		  break;
	}
	return x;
}