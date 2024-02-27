#include<stdio.h>
void B_sort(int [],int);
void main(void)
{
	int n;
    printf("enter the size of your array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n ;i++)
	{
	printf(" element-%d : ",i+1); 
	scanf("%d",&arr[i]);
	}
	B_sort(arr,n);
	printf("sorted elements\n");
	for(int i = 0; i < n ;i++)
	{
	printf(" element-%d : %d\n",i+1,arr[i]); 
	}
	

 



}
void B_sort(int *ptr,int n)
{
	int val;
for(int i = 0;i < n ;i++)
	{
		for(int j = 0;j < n - 1;j++)
		{
			    if(ptr[j+1] < ptr[j])
			    {
				   val = ptr[j];
				   ptr[j] = ptr[j+1];
				   ptr[j+1] = val;
			    }
		
		}
		
	}
	
}
