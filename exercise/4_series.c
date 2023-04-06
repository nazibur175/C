#include<stdio.h>
int main()
{
int n,i,j,s=0,a=0,x=0;
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    for(j=a+1;j<=i+x;j++)
    {
      s=s+j;
      a=j; 
    }
    x=j-1;
 }
  printf("%d",s);
return 0;
}