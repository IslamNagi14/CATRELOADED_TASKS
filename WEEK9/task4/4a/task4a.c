#include<stdlib.h>
#include<stdio.h>

void main()
{
	int num,sum;
	while(1)
	{
		printf("\nEnter any number to find sum of its digit: ");
		scanf("%d",&num);
		sum = 0;
		for(;num;)
		{
			sum += num % 10;
			num /= 10;
		}
			printf("Sum of digits = %d",sum);
	}
}