#include<stdio.h>
int main()
{
int n,x=0,rev=0;
scanf("%d",&n);
while(n>0)
{
 x=n%10;
 rev=rev*10+x;
 n=n/10;
}
printf("Reverse=%d",rev);
return 0;
}