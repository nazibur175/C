#include<stdio.h>
int main()
{
int i=0,n=0,x=0;
long long int sum=0;
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  scanf("%d",&x);
  sum=sum+x;
 }
 printf("%lld",sum);
return 0;
}