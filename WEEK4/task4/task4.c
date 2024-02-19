#include<stdio.h>
int F_Repeated(int []);
int n;
void main (void)
{
	printf("enter the size of your array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n ;i++)
	{
		printf("enter the value of the %dth element : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("the repeated element is : %d",F_Repeated(arr));
}
int F_Repeated(int arr[])
{
    for (int i = 0; i < n;i++)
	{
		
		for(int k = 0;k < n;k++)
		{
			if( i == k )
				continue;
			if(arr[i] == arr[k])
			{
				return arr[i];
			}
			
		}
		
	}
	
}
