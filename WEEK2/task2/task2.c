#include<stdio.h>
void main(void)
{
	int num;
	printf("enter any integar number : ");
    scanf("%d",&num);
    if ( num % 2 == 0)
	{
		printf("%d is even number",num);
	}
    else {printf("%d is odd number",num);}		
}