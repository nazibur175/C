#include<stdio.h>
int main()
{
int a,b,x,y,r,gcd;
scanf("%d%d",&a,&b);
if(a>b)
{
 x=a;
 y=b;
}
else 
{
 x=b;
 y=a;
}
 while(r!=0)
 {
  r=y%x;
  y=x;
  x=r;
 }
 gcd=y;
 printf("%d",gcd);
return 0;
}