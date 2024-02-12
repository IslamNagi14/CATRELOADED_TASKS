#include<stdio.h>
void main(void)
{
	int num,sum=0; float avg;
	for(int i =0;i<10;i++)
	{
		printf("enter the %d number : ",i+1);
		scanf("%d",&num);
		sum+=num;
	}
	avg = sum / 10.0 ;
	printf("the summation of your numbers is %d\n",sum);
	printf("the average of your numbers is %.2f ",avg);
	
}
