#include<stdio.h>
void main(void)
{
	float grade;
	printf("enter your grade :");
	scanf("%f",&grade);
	if ( grade >= 85)
	{printf("Excellent");}
    else if ( grade >= 75)
	{printf("Very Good");}
    else if ( grade >= 65)
	{printf("Good");}
    else if ( grade >= 50)
	{printf("pass");}
    else{printf("fail");}
}
