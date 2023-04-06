#include<stdio.h>
#include<math.h>
int main()
{
int n,i,s=0,a=0,b=0;
scanf("%d",&n);
 for(i=1;i<=n;i++)
   {
      a=pow((-1),i+1);
      b=a*i;
      s=s+b;     
   }
   printf("%d",s);
return 0;
}