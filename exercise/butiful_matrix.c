#include<stdio.h>
#include<math.h>
int main()
{
 int i,j,x,t;
  for(i=1;i<=5;i++)
  {
     for(j=1;j<=5;j++)
      {
        scanf("%d",&x);
         if(x==1) 
         {
           t=abs(3-i)+abs(3-j);
         }
      }
  }
  printf("%d\n",t);
return 0;
}