#include<stdio.h>
int main()
{
int n,total,x;
while((scanf("%d",&n))!=EOF)
  {
    total=0,x=0;

  if(n==0) break;
  else
   {

     while(n>0)
    {
    n=n/3;
    total=total+n;
    x=n%3;
    n=n+x;
    while(n==2) {n=n+1;}
    }
  }
  printf("%d\n",total);
}
return 0;
}
