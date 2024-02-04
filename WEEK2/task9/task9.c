#include<stdio.h>
void main(void)
{
	int num,fact = 1;
	printf("enter the number that you need its factorial : ");
	scanf("%d",&num);
	printf("the factorial of %d is ",num);
	while(num > 0)
	{
		fact*=num;
		num--;
	}
	printf("%d",fact);
}