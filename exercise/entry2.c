#include<stdio.h>
int main()
{
int a,b,c,x,y;
scanf("%d%d%d%d%d",&a,&b,&c,&x,&y);
   if(x>=a && (y>=b || y>=c)) 
   printf("NO");
   else if(x>=b && (y>=a || y>=c)) 
   printf("NO");
   else if(x>=c && (y>=a || y>=b)) 
   printf("NO");
   else printf("YES");
return 0;
}