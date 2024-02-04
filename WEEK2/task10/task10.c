#include<stdio.h>
void main(void)
{
	int id;
	
	
	for(int i = 1; i <= 3 ; i++)
	{
	printf("your %d attempt\n",i);
	printf("enter your ID : ");
	scanf("%d",&id);
	if( id != 12300)
	{
			printf("You are nor registed\n");
		if(i==3)
			printf("No more tries");
	}
	else
	{
		printf("Welcome Sir...");
		break;
	
	}
	
	
	}
	
}