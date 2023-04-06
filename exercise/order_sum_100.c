#include<stdio.h>
int main()
{
int a,i,k;
  for(i=1;i<=10;i=i+1)
     {
      for(k=1;k<=10;k=k+1)
      {
      a=(i*i)+(k*k);
      if(a<=100)
      printf("%d %d\n",i,k);
      }
     }
return 0;
}