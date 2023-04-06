#include<stdio.h>
int main()
{
int a,b,c,x,y;
scanf("%d%d%d%d%d",&a,&b,&c,&x,&y);
   if((x>=a||x>=b||x>=c)&&(y>a||y>b||y>c))
   printf("Yes");
   else printf("NO");
return 0;
}