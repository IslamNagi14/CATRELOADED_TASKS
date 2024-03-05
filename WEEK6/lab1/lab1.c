#include<stdio.h>
#include<stdlib.h>
void main(void)
{
	int *ptr;
	int x =1,i=0;
	printf("enter the degree of %dth subject : ",i+1);
	ptr = (int*) malloc(sizeof(int));
	if(ptr != NULL)
	{
	scanf("%d",ptr);
	fflush(stdin);fflush(stdout);
	printf("do you need to add more numbers : ");
	scanf("%d",&x);
        while(x)
        {
	      i++;
	      (int*)realloc(ptr,sizeof(int));
		  printf("\n");
		  if(ptr == NULL)
			  goto a;
		 printf("enter the degree of %dth subject : ",i+1);fflush(stdin);fflush(stdout);
          scanf("%d",ptr + i);fflush(stdin);fflush(stdout);
		  printf("do you need to add more numbers : ");fflush(stdin);fflush(stdout);
	      scanf("%d",&x);fflush(stdin);fflush(stdout);
        }
	}
	else
	{
	a:	printf("memory not available");
	}
	printf("your degrees are \n");
	for(;i+1;i--)
	{
		
		printf("%d\n",*(ptr+i));
	}
	
}