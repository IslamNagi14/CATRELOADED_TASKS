#include<stdio.h>
void main(void)
{
	int id,pas; // id-->12300...pas-->12012
	printf("enter your ID : ");
	scanf("%d",&id);
	if( id == 12300)
	{
		for(int i = 1; i <= 3 ; i++)
	    {
	      printf("please,enter your password : ");
	      scanf("%d",&pas);
	      if(pas == 12012)
	      {
		    printf("Welcome Sir...");
		    break;
	      }
	      else
	      {
			   if(i<3)
		    printf("You are nor registed\nTry Again\n");
		   else
			printf("No more tries");
	      }
			
	    }
	}
	else
		printf("Wrong id ,try next time ");
	
}
