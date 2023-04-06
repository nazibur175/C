#include<stdio.h>
int main()
{
long long int a,s,v;
scanf("%lld",&a);
if (a<=1000000)
{
s=6*a*a;
v=a*a*a;
printf("%lld %lld",s,v);
}
else
return 0;
}