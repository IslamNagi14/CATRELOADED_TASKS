#include<stdlib.h>
#include<stdio.h>
int power(int);
void main()
{
	long long bin,chbin;
	int dec = 0,i =0;
	printf("Enter a binary number: ");
	scanf("%lld",&bin);
	chbin = bin;
	for(;chbin;)
	{
		if(chbin % 10 == 1)
			dec += power(i);
		chbin/=10;
		i++;
	}
	printf("%lld in binary = %d in decimal",bin,dec);
	
}
int power(int n)
{
	int  num = 1;
	for(;n;n--)
	{
		num*=2;
	}
	return num;
}