#include<stdio.h>
#include<math.h>
int main()
{
int a=0,i=0;
scanf("%d",&a);
for(i=1;i<=a;i++)
{
int n=0,c=0,x=0,last=0;
scanf("%d",&n);
while(n!=0)
{
  n=n/10;
  c=c+1;
}
x=pow(6,c);
last=x%10;
printf("%d\n",last);
}
return 0;
}