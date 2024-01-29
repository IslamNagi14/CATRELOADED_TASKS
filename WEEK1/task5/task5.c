#include<stdio.h>
void main(void)
{
	int N_num , R_num = 0;
	printf("enter your number : ");
	scanf("%d",&N_num);
	int n =N_num;
	for(;;)
	{
		
		if(n == 0)
		{
			break;
		}
	R_num=(R_num*10)+n%10;
    n/=10;	
	}
	printf("the actual number is %d and the its reverse is %d",N_num,R_num);
	
	
}