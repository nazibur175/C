#include<stdio.h>
int main()
{
int a,b,q,rem;
scanf("%d%d",&a,&b);
q=a/b;
rem=a%b;
printf("%d %d",q,rem);
return 0;
}