#include<stdio.h>
int main()
{
int t,n,i,x,c;
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
  c=0;
  while(factorial>0)
  {
    x=factorial%10;
    if(x==0)
    {
    c=c+1;
    factorial=factorial/10;
    } 
    else break;
  }
  printf("%d\n",c);
}
return 0;
}