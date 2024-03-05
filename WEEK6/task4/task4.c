#include<stdio.h>
#include<string.h>
int F_occu(char*,char);
int (*ptr)(char*,char);
void main (void)
{
	ptr = F_occu;
	char str1[200] , ch;
	printf("input string : ");
	gets(str1);
	printf("input character to search : ");
	scanf("%c",&ch);
	
	int ind_num = ptr(str1,ch);
	if(ind_num >= 0)
				printf("'%c' is found at index : %d",ch,ind_num);
		else
			printf("the occurrence of the second string dose not exist in the first string");

}
int F_occu(char *p_str1,char ch)
{
		int x = -1,i;
	for(i = 0;i<strlen(p_str1);i++)
	{
		if (p_str1[i] == ch)
			break;
				
	}
	return i;
	
}