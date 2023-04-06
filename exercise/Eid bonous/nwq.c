#include<stdio.h>
int main()
{
 int i,flag=1,n;
 scanf("%d",&n);
 for(i=2;i<=n/2;i++)
 {
  if(n==1) flag==0;
  if(n%i==0)
  flag=0;
  break;
 }
 if(flag==0)
   printf("Not Prime Number \n");

 else printf("Prime Number \n");
  return 0;
}