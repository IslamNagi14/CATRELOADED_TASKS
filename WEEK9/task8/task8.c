#include<stdlib.h>
#include<stdio.h>
void ptrMxMn(int*,int*,int*,int);
void main()
{
	while(1)
	{
	int *ptr,size,Max,Min ;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	ptr = (int*)calloc(size,sizeof(int));
	ptrMxMn(ptr,&Max,&Min,size);
	printf("Minimum element in array: %d\n",Min);
	printf("Maximum element in array: %d\n",Max);
	free(ptr);
	}
	
}
void ptrMxMn(int *ptr,int *Max,int *Min,int size)
{
	printf("Enter %d elements in array: ",size);
	for(int i = 0; i < size ;i++)
	{
		scanf("%d",ptr+i);
		(i == 0)?*Min = *Max = *(ptr+i): 0;
		if(*Max < *(ptr+i))
			*Max = *(ptr+i);
		if(*Min > *(ptr+i))
			*Min = *(ptr+i);
	}
}