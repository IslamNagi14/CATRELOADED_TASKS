#include<stdlib.h>
#include<stdio.h>

void main()
{
	int num,zeros,ones;//default bit number is 32
	
	while(1)
	{
		zeros = 32;ones = 0;
		printf("Enter any number: ");
		scanf("%d",&num);
		for(;num;)
		{
			num&=(num-1);
			ones++;
		}
		zeros -= ones;
		printf("Total zero bit is %d\n",zeros);
		printf("Total one bit is %d\n",ones);
	}
}
