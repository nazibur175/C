#include<stdio.h>
int main()
{
int a,i,j,x=0;
scanf("%d",&a);
 for(i=1;i<=a;i=i+1)
 {
   for(j=1;j<=i;j=j+1)
   {
   x=x+j;
   } 
 }
 printf("%d",x);
return 0;
}