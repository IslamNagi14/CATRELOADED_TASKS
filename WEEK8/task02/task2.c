#include"file.h"


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
