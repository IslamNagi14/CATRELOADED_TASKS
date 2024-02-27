#include<stdio.h>
void main(void)
{
int num = 10;
printf("befor changing %d\n",num);
int *ptr = &num;
*ptr = 20;
printf("after changing %d\n",num);
}