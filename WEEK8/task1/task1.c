#include<stdio.h>
struct employees
{
  float salary,bonus,deduction;
}Mohsen,Maged,Mariam;
void main(void)
{
	printf("enter the salary of Mohsen : ");
scanf("%f",&Mohsen.salary);
printf("enter the bonus of Mohsen : ");
scanf("%f",&Mohsen.bonus);
printf("enter the deductions of Mohsen : ");
scanf("%f",&Mohsen.deduction);
printf("enter the salary of Maged : ");
scanf("%f",&Maged.salary);
printf("enter the bonus of Maged : ");
scanf("%f",&Maged.bonus);
printf("enter the deductions of Maged : ");
scanf("%f",&Maged.deduction);
printf("enter the salary of Mariam : ");
scanf("%f",&Mariam.salary);
printf("enter the bonus of Mariam : ");
scanf("%f",&Mariam.bonus);
printf("enter the deductions of Mariam : ");
scanf("%f",&Mariam.deduction);
float T_value = Mohsen.salary + Mohsen.bonus - Mohsen.deduction + Maged.salary + Maged.bonus - Maged.deduction
+ Mariam.salary + Mariam.bonus - Mariam.deduction;
printf("The total value shall be supplied : %.3f",T_value);



}