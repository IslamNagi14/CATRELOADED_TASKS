#include<stdio.h>
void main(void)
{
	char str[100];int i = 0;
	printf("enter any string : ");
	gets(str);
	for(;str[i] != '\0';i++);
	printf("the total number is %d",i);


}