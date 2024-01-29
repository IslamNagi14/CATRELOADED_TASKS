#include<stdio.h>
void main(void)
{
	float num;
	printf("enter a dollers and cents amount : ");
	scanf("%f",&num);
	printf("with tax added %.2f ",(num+num*.05));
	
}