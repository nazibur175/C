#include<stdio.h>
int main()
{
int a,b,c=0,i;
scanf("%d%d",&a,&b);
if(a>b) c=a;
else c=b;
for(i=c;i>=1;i--)
  {
    if(a%i==0 && b%i==0)
    {
    printf("%d\n",i);
    break;
    }
  }
return 0;
}