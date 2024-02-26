#include<stdio.h>
void main(void)
{
	int n,val;
	printf("enter the size of your array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n; i++)
	{
		printf("enter the %dth value : ",i+1);
        scanf("%d",& arr[i]);		
	}
	// descending sorting
	for(int i = 0;i < n ;i++)
	{
		for(int j = 0;j < n - 1;j++)
		{
		   
		    if(arr[j+1] > arr[j])
			{
			     val = arr[j+1];
				 arr[j+1] = arr[j];
				 arr[j] = val;
				  
			}
			 
		}
		
	}
	printf("the second largest elemnt is %d",arr[1]);
}
