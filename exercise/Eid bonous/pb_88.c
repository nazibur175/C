#include<stdio.h>
int main()
{
int n,row,col;
  n=7;
  for(row=1;row<=n;row++)
    {
      for(col=1;col<=n;col++)
         {
           if(row==col) printf("*");
           else printf("0");
         }

      printf("\n");
    }
return 0;
}