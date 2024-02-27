#include<stdio.h>
void main(void)
{
int x , y , z;
x = 2,y = 3; z =  7;
int *px , *py , *pz;
px = &x;
py = &y;
pz = &z;
printf("x-->%d\t y-->%d \tz-->%d\n",x,y,z);//x->2   y-->3  z-->7
printf("px-->%p\t py-->%p \tpz-->%p\n",px,py,pz);//px-->&x   py-->&y  pz-->&z
printf("*px-->%d\t *py-->%d \t*pz-->%d\n",*px,*py,*pz);//*px-->2   *py-->3  *pz-->7
printf("Swapping pointers\n");
pz=px;px=py;py=pz;
printf("x-->%d\t y-->%d \tz-->%d\n",x,y,z);//x->2   y-->3  z-->7
printf("px-->%p\t py-->%p \tpz-->%p\n",px,py,pz);//pz-->&x   px-->y  py-->&x
printf("*px-->%d\t *py-->%d \t*pz-->%d\n",*px,*py,*pz);//*px-->2   *py-->7  *pz-->2


printf("%d",x);
}