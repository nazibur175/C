#include<stdio.h>
int main()
{
int n,i,x,a,b;
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
  scanf("%d",&x);
   a=x/10000;
   b=x%10;
   printf("Sum = %d\n",(a+b));
 } 
return 0;
}