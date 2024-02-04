#include<stdio.h>
void main(void)
{
	int ans;
	
	for(;;)
	{
		printf("what is the result of 3*4 : ");
		scanf("%d",&ans);
		if (ans == 4*3)
		{
			printf("Thanks");
			break;
		}
		else{printf("Try Again\n");}
	}
}