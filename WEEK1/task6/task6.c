#include<stdio.h>
void main(void)
{
	int num1,num2;
	printf("enter the 1st number : ");
	scanf("%d",&num1);
	printf("enter the 2nd number : ");
	scanf("%d",&num2);
	
	printf("%d + %d = %d\n",num1,num2,num1 + num2);
	printf("%d - %d = %d\n",num1,num2,num1 - num2);
	printf("%d * %d = %d\n",num1,num2,num1 * num2);
	if(num2 == 0)
	{printf(" the 2nd number  is not valid to make division operation\n");} 
	else{
		printf("%d / %d = %d\n",num1,num2,num1 / num2);
		printf("%d %% %d = %d\n",num1,num2,num1 % num2);
	    }
	printf("%d & %d = %d\n",num1,num2,num1 & num2);
	printf("%d | %d = %d\n",num1,num2,num1 | num2);
	printf("%d ^ %d = %d\n",num1,num2,num1 ^ num2);
	printf("%d >> %d = %d\n",num1,num2,num1 >> num2);
	printf("%d << %d = %d\n",num1,num2,num1 << num2);
	printf("%d && %d = %d\n",num1,num2,num1 && num2);
	printf("%d || %d = %d\n",num1,num2,num1 || num2);
}
