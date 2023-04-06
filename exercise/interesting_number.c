#include<stdio.h>
#include<math.h>
int main()
{
   double n=0,a=0;
   scanf("%lf",&n);
   a=pow(n,1.0/(n-1.0));
   printf("%f",a);
  return 0;
  }