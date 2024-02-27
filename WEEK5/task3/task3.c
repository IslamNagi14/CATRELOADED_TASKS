#include<stdio.h>
int r,c;
int sp_arr(int [][c],int [][c],int [][c]);
void main(void)
{
	
	printf("enter the  rows of the arrays : ");
	scanf("%d",&r);
	printf("enter the  coluwns of the arrays : ");
	scanf("%d",&c);
	int arr1[r][c];
		printf("enter the elements of matrix 1\n");
	for(int i = 0;i < r;i++)
	{
		for(int k = 0;k < c;k++)
		{
			printf("enter the value of [%d , %d] : ",i+1,k+1);
			scanf("%d",&arr1[i][k]);
		}
		
	}
	int arr2[r][c];
		printf("enter the elements of matrix 2\n");
	for(int i = 0;i < r;i++)
	{
		for(int k = 0;k < c;k++)
		{
			printf("enter the value of [%d , %d] : ",i+1,k+1);
			scanf("%d",&arr2[i][k]);
		}
		
	}
	int res[r][c];
	printf("the sumation of scalar product is %d\n",sp_arr(arr1,arr2,res));
	for(int i = 0;i < r;i++)
	{
		for(int k = 0;k < c;k++)
		{
			printf("%d\t",res[i][k]);

		}
		printf("\n");
	}
	
}

int sp_arr(int arr1[][c],int arr2[][c],int res[][c])
{
	int sum = 0;
	for(int i = 0;i < r;i++)
	{
		for(int k = 0;k < c;k++)
		{
			res[i][k] =arr1[i][k] * arr2[i][k];
			sum += res[i][k];
		}
		
	}
	return sum;
	
}