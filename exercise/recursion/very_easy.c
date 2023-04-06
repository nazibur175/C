#include<stdio.h>
#include<math.h>
int main()
{
long long int n,a,i;
long long int s;
while(scanf("%lld%lld",&n,&a)!=EOF)
{
  s=0;
  for(i=1;i<=n;i++)
  {
    s=s+i*pow(a,i);
  }

printf("%lld\n",s);
}
return 0;
}