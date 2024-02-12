#include<stdio.h>
void swap(void);
float num1 ,num2;
void main(void)
{
	printf("enter the 1st number : ");
	scanf("%f",&num1);
	printf("enter the 2nd number : ");
	scanf("%f",&num2);
	printf("the 1st number before swapping is %.3f\n",num1);
	printf("the 2nd number before swapping is %.3f\n",num2);
	printf("----------------------------------------------------------------\n");
	
	swap();
	printf("the 1st number after swapping is %.3f\n",num1);
	printf("the 2nd number after swapping is %.3f\n",num2);
}
void swap(void)
{
	float temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
