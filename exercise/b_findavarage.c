#include<stdio.h>
int main()
{
int x,y;
double z;
scanf("%d%d%lf",&x,&y,&z);
if(x>=0)
{
float avg;
avg=(x+y+z)/6;
printf("%f",avg);
}
return 0;
}