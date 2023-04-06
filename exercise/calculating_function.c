#include<stdio.h>
#include<math.h>
int main()
{
long long int n,i,element,sum=0;
scanf("%lld",&n);
for(i=1;i<=n;i++)
{
  element=pow(-1,i)*i;
  sum=sum+element;
}
printf("%lld",sum);
return 0;
}