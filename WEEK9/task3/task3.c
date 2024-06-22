#include<stdlib.h>
#include<stdio.h>

void main()
{
	char op;
	float num1 ,num2;
	while(1)
	{
		printf("\nEnter an operator (+, -, *,/) : ");fflush(stdin);fflush(stdout);
		scanf("%c",&op);
		printf("Enter two operands: ");fflush(stdin);fflush(stdout);
		scanf("%f",&num1);
		scanf("%f",&num2);
		switch(op)
		{
			case '+':
				printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
			break;
			case '-' :
				printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
			break;
			case '*' :
				printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
			break;
			case '/' :
				(num2==0)?printf("invalid diviation..."):printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
		
		}
	}
}