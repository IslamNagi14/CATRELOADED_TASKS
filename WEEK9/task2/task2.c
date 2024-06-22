#include<stdlib.h>
#include<stdio.h>

void main()
{
	int year;
	while(1)
	{
		printf("Enter Year : ");
		scanf("%d",&year);
		if(year % 400 == 0)
			printf("LEAP YEAR\n");
		else
			printf("NOT LEAP YEAR\n");
	}

}