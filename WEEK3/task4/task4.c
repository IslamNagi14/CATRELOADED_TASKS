#include<stdio.h>
void login(void);

void main(void)
{
	login();
}
void login(void)
{
	int id,pas;//id-->12300.........psa-->12321
	printf("enter your personal ID : ");
	scanf("%d",&id);
	if( id == 12300)
	{
		for(int i = 1; i <= 3;i++)
		{
			printf("enter the correct Password : ");
			scanf("%d",&pas);
			if(pas == 12321)
			{
				printf("Welcome Sir...");
				break;
			}
			else
			{
			printf("Wrong Password !\n");			
			}
			if( i == 3)
				printf("No more tries...\nCheck the correct Password of your ID and try again later");
		}
	}
	
	
	else{printf("this ID does not exist...");}
}