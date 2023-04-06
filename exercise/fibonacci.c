#include<stdio.h>
int main()
{
int i,f1,f2,fibo,c=2;
f1=1,f2=1;
printf("%d %d",f1,f2);
for(i=1;i<=10;i++)
{
 fibo=f1+f2;
 printf("   %d",fibo);
 f1=f2;
 f2=fibo;
 c=c+1;
}
printf("\nTotal Fibonacci number=%d",c);
return 0;
}