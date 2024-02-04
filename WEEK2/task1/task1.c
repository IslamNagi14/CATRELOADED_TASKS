#include<stdio.h>
void main(void)
{
	int N_hour; float salary;
	printf("enter your working hours : ");
	scanf("%d",&N_hour);
	if (N_hour >= 40)
	{
		salary = N_hour * 50;
	}
	else { salary = N_hour * 50 * 0.9; }
	printf("your salary is : %.3f $",salary);
}