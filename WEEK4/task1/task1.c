#include<stdio.h>
void Sort(int [],int,int);
void enter_arr(int [],int);

void main(void)
{
	int n,req;
	printf("if you need sort array in ascending enter '0' for descending enter '1' : ");
	scanf("%d",&req);
	printf("enter the size of your array : ");
	scanf("%d",&n);
	int arr[n] ;
	enter_arr(arr,n);
	switch(req)
	{
		case 0 :
		Sort(arr , n , req);
		break;
		case 1 :
		Sort(arr , n , req);
		break;
	}
	
	for(int i = 0;i < n;i++)
	{
		printf("%d\n",arr[i]);
	}
	
}