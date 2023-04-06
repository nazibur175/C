#include<stdio.h>
int main()
{
int i,j,k,l;
int a=4;
for(i=1;i<=a;i=i+1)
  {
    for(j=1;j<=a;j=j+1)
      {for(k=1;k<=a;k=k+1)
       {
         for(l=1;l<=a;l=l+1) {
         if(i!=j && j!=k && k!=l)
         printf("%d,%d,%d,%d\n",i,j,k,l);
         }
       }
      }
  }
return 0;
}