#include<stdio.h>
#include<math.h>
int main()
{
int n,i,x,s=0;
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  x=pow(i,i);
  s=s+x; 
 }
printf("%d",s);
return 0;
}