#include "file.h"
void student(struct G_std std1[])
{
	int _id,x=1;
	printf("enter your ID : ");
		scanf("%d",&_id);
		for(int i = 0;i<10;i++)
		{
			if(_id == std1[i].id)
			{
				x=0;
				printf("your grade in Programming : %.3f\n",std1[i].G_programming);
				printf("your grade in DataStructures : %.3f\n",std1[i].G_DataStructures);
				printf("your grade in DiscreteMath : %.3f\n",std1[i].G_DiscreteMath);
				printf("your grade in Algorithms : %.3f\n",std1[i].G_Algorithms);
				break;
			}
		}
		if(x)
		{printf("Wrong ID\n");}
}
void admin(struct G_std std1[])
{
	int _id,x=1,code,n=1;
	printf("enter ID of the selected student: ");
		scanf("%d",&_id);
		for(int i = 0;i<10;i++)
		{
			if(_id == std1[i].id)
			{
				for(;n;){
	
				printf("enter subject code : ");
				scanf("%d",&code);
				switch(code)
				{
				case 1:
				x=0;
				printf("enter the new grade : ");
				scanf("%f",&std1[i].G_programming);
				break;
				case 2:
				x=0;
				printf("enter the new grade : ");
				scanf("%f",&std1[i].G_DataStructures);
				break;
				case 3:
				x=0;
				printf("enter the new grade : ");
				scanf("%f",&std1[i].G_DiscreteMath);
				break;
				case 4:
				x=0;
				printf("enter the new grade : ");
				scanf("%f",&std1[i].G_Algorithms);
				break;
				default:
				printf("Wrong code");break;
				}
				printf("do you want to change another subject(1->yes...0->no) : ");
				scanf("%d",&n);
				}
				
			}
		}
		if(x)
		{printf("Wrong ID");}
	
}