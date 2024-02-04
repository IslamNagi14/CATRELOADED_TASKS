#include<stdio.h>
void main(void)
{
	int num;
	printf("enter the number that you need its multiplication table : ");
	scanf("%d",&num);
	for(int i =1 ; i <= 12; i++)
	{
		printf("%d * %d = %d\n",i,num,i*num);
	}
}