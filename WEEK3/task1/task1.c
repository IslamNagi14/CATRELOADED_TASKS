#include<stdio.h>
double Get_max(double,double,double);
void main(void)
{
	float num1,num2,num3;
	printf("enter the 1st number : ");
	scanf("%f",&num1);
	printf("enter the 2nd number : ");
	scanf("%f",&num2);
	printf("enter the 3rd number : ");
	scanf("%f",&num3);
	float max = Get_max(num1,num2,num3);
	printf("the maximum number is %.2f",max);
}
double Get_max(double num1,double num2,double num3)
{
	int maximum = (num1>num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);
	return maximum;
}