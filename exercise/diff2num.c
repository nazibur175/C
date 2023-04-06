#include<stdio.h>
int main()
{
int a,b,d;
scanf("%d%d",&a,&b);
d=a-b;
if(a<b)
d=b-a;
printf("%d",d);
return 0;
}