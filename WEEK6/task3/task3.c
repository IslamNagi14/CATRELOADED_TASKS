#include<stdio.h>
int len(char[]);
void main(void)
{
char str1[100] , str2[100];
printf("enter any string : ");
gets(str1);
int n = len(str1);
printf("%s\n",str1);
for(int i = 0;i<n;i++)
{
	str2[n-i-1] = str1[i];
}	
printf("%s",str2);

}

int len(char str[])
{
	int i;
	for(i = 0;str[i] !='\0';i++);
	return i;
}