#include<stdio.h>
int main()
{
int x=0,a=0,b=0,c=0,d=0,e=0,total=0;
scanf("%d",&x);
if(x>0)
{
 a=x/5;
 x=x%5;
 b=x/4;
 x=x%4;
 c=x/3;
 x=x%3;
 d=x/2;
 x=x%2;
 e=x;
 total=a+b+c+d+e;
 printf("%d",total);
}
return 0;
}