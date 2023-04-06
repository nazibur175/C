#include<stdio.h>
#include<math.h>
int main()
{
float a,c,d;
int b;
scanf("%f",&d);
a=sqrt(d);
b=a;
c=a-b;
if(c>0)
 printf("NO");
else printf("YES");
return 0;
}