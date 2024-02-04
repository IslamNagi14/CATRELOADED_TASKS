#include<stdio.h>
void main(void)
{
	int id;
	printf("enter your ID : ");
	scanf("%d",&id);
	switch(id)
	{
		case 1234 : 
		printf("Harry");
		break;
		case 5678 :
		printf("Ron");
		break;
		case 1145 :
		printf("Hermione");
		break;
		default :
		printf("Wrong ID");
	    break; 
    
	}
}