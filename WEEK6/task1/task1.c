#include<stdio.h>
#include<string.h>
void main(void)
{
char str[100];
printf("enter any string : ");
gets(str);
for(int i = 0;i<strlen(str);i++)
{
	 if((str[i] <= 'z') && (str[i] >= 'a'))
	{
		str[i]-=32;
	}
}
printf("%s",str);

}