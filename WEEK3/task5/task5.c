#include<stdio.h>
void GetFibonacci(int);
void main(void)
{
	int num;
	printf("enter any number to git its fibonacci : ");
	scanf("%d",&num);
	GetFibonacci(num);
	
}
void GetFibonacci(int n)
{
	int x = 0 , y = 1 , count = 0;
	for(int i = 1;;i++)
	{
		if(y >= x)
		{
		if(i == (x + y))
		{
		if( count == n)
			break;
		
		x = y;
		y = i;
		count++;
		}
		}else{break;}
	}
	if(n > count)
		printf("the F(%d) does NOT esixt in my system and the maximum value could be given is F(%d) = %d",n,count,x);
	else{printf("F(%d) = %d",n,x);}
	
}