#include<stdio.h>
int main()
{
  int a,b,x,y,n,m,t,p,q;
  scanf("%d %d %d %d %d %d",&p,&q,&a,&b,&x,&y);
  if(a>=x)
   n=a-x; 
  else n=x-a;
  if(b>=y)
    m=b-y;
  else m=y-b;
 t=n+m;
  printf("%d",t);
return 0;
}