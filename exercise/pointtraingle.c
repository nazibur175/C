#include<stdio.h>
#include<math.h>
int main()
{
long long int x1=0,y1=0,x2=0,y2=0,x3=0,y3=0;
long double area=0;
scanf("%lld %lld %lld %lld %lld %lld",&x1,&y1,&x2,&y2,&x3,&y3);
area=0.5*((x1*y2-x2*y1)+(x2*y3-x3*y2)+(x3*y1-x1*y3));
if(area>=0)
printf("%.4LF",area);
else
{
 area=area*(-1);
printf("%.4LF",area);
}
return 0;
}