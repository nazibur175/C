#include<stdio.h>
int main()
{
int a,b,i;

scanf("%d",&a);
for(i=1;i<=10;i++){
  b=a*i;
printf("%d X %d = %d\n",a,i,b);
}
return 0;
}