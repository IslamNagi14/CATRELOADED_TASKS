#include "file5.h"
float GetMax()
{
	
	return (num1 > num2)?(num1 > num3)?(num1 > num4)?  num1 : num4 :(num3 > num4)? num3 : num4\
	:(num2 > num3)?(num2 > num4)? num2 :  num4 :(num3 > num4)? num3 :  num4;
}
float GetMin()
{
	
	return (num1 < num2)?(num1 < num3)?(num1 < num4)?  num1 : num4 :(num3 < num4)? num3 : num4\
	:(num2 < num3)?(num2 < num4)? num2 :  num4 :(num3 < num4)? num3 :  num4;
}