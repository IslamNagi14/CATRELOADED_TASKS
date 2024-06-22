#include<stdlib.h>
#include<stdio.h>

void main()
{
	int num,power,res;
	while(1)
	{
		printf("\nEnter the number: ");
		scanf("%d",&num);
		printf("Enter the power: ");
		scanf("%d",&power);
		res = 1;
		for(;power;)
		{
			res*=num;
			power--;
		}
		printf("Answer = %d",res);
	}
}