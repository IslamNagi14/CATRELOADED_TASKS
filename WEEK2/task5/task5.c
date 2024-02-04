#include<stdio.h>
void main(void)
{
	int num1,num2,num3,max;
	printf("enter the 1st number : ");
	scanf("%d",&num1);
	printf("enter the 2nd number : ");
	scanf("%d",&num2);
	printf("enter the 3rd number : ");
	scanf("%d",&num3);
	max = (num1 > num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
	printf("the maximum number is : %d",max);
	
}