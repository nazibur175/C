#include<stdio.h>
int main()
{
int a,b,n,i;

scanf("%d%d",&a,&b);
for(n=a;n<=b;n++)
 {
   int flag=1;
   if(n<=1) flag=0;
   {
    for(i=2;i<=n/2;i++)
    if(n%i==0) flag=0;
    if(flag==1) printf("%d\n",n);
   }
 }
return 0;
}