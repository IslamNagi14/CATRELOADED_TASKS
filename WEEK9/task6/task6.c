#include<stdlib.h>
#include<stdio.h>
void main()
{
	int n , odd, even;
	while(1)
	{
		printf("Enter size of the array: ");
		scanf("%d",&n);
		int arr[n];
		odd = even = 0;
		printf("Enter %d elements in array: ",n);
		for(int i = 0;i< n; i++)
		{
			scanf("%d",arr+i);
			(arr[i] % 2 ==0)? even++ : odd++ ;
		}
		printf("Total even elements: %d\n",even);
		printf("Total odd elements: %d\n",odd);
	}
}