#include<stdio.h>
void Sort(int arr[],int n,int s)
{
	int val ;//= arr[0];
for(int i = 0;i < n ;i++)
	{
		for(int j = 0;j < n - 1;j++)
		{
		    if( s == 0)
			{
			    if(arr[j+1] < arr[j])
			    {
				   val = arr[j];
				   arr[j] = arr[j+1];
				   arr[j+1] = val;
			    }
			}
			if(s == 1)
			{
				  if(arr[j+1] > arr[j])
			    {
				   val = arr[j+1];
				   arr[j+1] = arr[j];
				   arr[j] = val;
				  
			    }
				
			}
			 
		}
		
	}
}
void enter_arr(int arr[],int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("enter the %dth value : ",i+1);
        scanf("%d",& arr[i]);		
		//printf("%d\n",arr[i]);
	}		
}