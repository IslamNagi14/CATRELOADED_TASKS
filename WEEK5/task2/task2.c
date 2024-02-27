#include<stdio.h>
float sum(float *ptr1,float *ptr2)
{
	float sum = (*ptr1) + (*ptr2);
	return sum;
}
void main(void)
{
float num1,num2;
printf("enter the 1st number : ");
scanf("%f",&num1);
printf("enter the 2nd number : ");
scanf("%f",&num2);

printf("the summation of %.3f and %.3f is %.5f",num1,num2,sum(&num1,&num2));

}