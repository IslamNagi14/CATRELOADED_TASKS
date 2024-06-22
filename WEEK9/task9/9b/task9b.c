#include<stdlib.h>
#include<stdio.h>
int power(int);
void main()
{
	int num,n;
	printf("Enter any number: ");
	scanf("%d",&num);
	printf("Enter nth bit to check (0-31): ");
	scanf("%d",&n);
	printf("the %d bit is set to %d",n,(num & (1 << n)) >> n);
	
}