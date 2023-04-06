#include<stdio.h>
int main()
{
int t,n,i;
long long int factorial;
scanf("%d",&t);
while(t--)
{
  factorial=1;
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
    factorial=factorial*i;
  }
  printf("%lld\n",factorial);
}
return 0;
}