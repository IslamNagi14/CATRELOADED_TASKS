#include "file5.h"
void main()
{ while(1)
	{
	printf("Enter the 4 numbers : \n");
	scanf("%f",&num1);fflush(stdin);fflush(stdout);
	scanf("%f",&num2);
	scanf("%f",&num3);fflush(stdin);fflush(stdout);
	scanf("%f",&num4);
	printf("the maximum number = %.3f\n",GetMax());fflush(stdin);fflush(stdout);
	printf("the minimum number =  %.3f\n",GetMin());
	}
}
