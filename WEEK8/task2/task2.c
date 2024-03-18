#include<stdio.h>
#include"file.h"
struct G_std
{
	int id;
  float G_programming,G_DataStructures,\
  G_DiscreteMath,G_Algorithms;
};
void student();
void admin();
void main(void)
{
	char access;
	struct G_std std[10] = {
		{1,30,40,48,32},
		{2,48,96,72,95},
		{3,47,69,77,93},
		{4,76,55,65,91},
		{5,84,44,81,90},
		{6,92,76,95,96},
		{7,30,92,73,88},
		{8,88,93,92,95},
		{9,76,96,85,89},
	    {10,34,90,65,91},};
		for(;;)
		{fflush(stdin);fflush(stdout);
		printf("are you sign as\n a)admin or b)student\n");
		scanf("%c",&access);
		switch(access)
		{
		case 'a':
		admin(std);
		break;
		case 'b':
		student(std);
		break;
       }
		}
		
}
void student(struct G_std std[])
{
	int _id,x=1;
	printf("enter your ID : ");
		scanf("%d",&_id);
		for(int i = 0;i<10;i++)
		{
			if(_id == std[i].id)
			{
				x=0;
				printf("your grade in Programming : %.3f\n",std[i].G_programming);
				printf("your grade in DataStructures : %.3f\n",std[i].G_DataStructures);
				printf("your grade in DiscreteMath : %.3f\n",std[i].G_DiscreteMath);
				printf("your grade in Algorithms : %.3f\n",std[i].G_Algorithms);
				break;
			}
		}
		if(x)
		{printf("Wrong ID\n");}
}
void admin(struct G_std std[])
{
	int _id,x=1,code,n=1;
	printf("enter ID of the selected student: ");
		scanf("%d",&_id);
		for(int i = 0;i<10;i++)
		{
			if(_id == std[i].id)
			{
				for(;n;){
	
				printf("enter subject code : ");
				scanf("%d",&code);
				switch(code)
				{
				case 1:
				x=0;
				printf("enter the new grade : ");
				scanf("%f",&std[i].G_programming);
				break;
				case 2:
				x=0;
				printf("enter the new grade : ");
				scanf("%f",&std[i].G_DataStructures);
				break;
				case 3:
				x=0;
				printf("enter the new grade : ");
				scanf("%f",&std[i].G_DiscreteMath);
				break;
				case 4:
				x=0;
				printf("enter the new grade : ");
				scanf("%f",&std[i].G_Algorithms);
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