#include<stdlib.h>
#include<stdio.h>
void main()
{
	char str1[100];
	while(1)
	{
	int len =0 ;
	printf("Enter any string : ");
	gets(str1);
	while(str1[len++] != '\0');
	len--;
	char str2[len];
	for(int i = 0; i < len;i++)
	{
		str2[i] = str1[i];
	}
	printf("the socend string becomes : %s\n",str2);

	}

}