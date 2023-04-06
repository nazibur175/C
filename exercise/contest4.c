#include<stdio.h>
int main()
{
//int x=0,a=0,b=0;
//long int c=0;
long long int x,a,b,c,y=0;
scanf("%lld%lld%lld%lld",&x,&a,&b,&c);
y=a+b+c+3;
if (x>=1)
  {
    if(x>=y)
     printf("YES");
     else printf("NO");
  }
return 0;
}