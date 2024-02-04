#include<stdio.h>
void main(void)
{   int n;
	printf("enter the height of your pyramid : ");
	scanf("%d",&n);
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1 ;i+j <= n+1;j++)
		{
			printf(" ");
		}
		for(int k = 1 ;k<=2*i-1; k++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}