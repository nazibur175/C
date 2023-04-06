#include<stdio.h>
int main()
{
int n,row,col;
  n=5;
  for(row=1;row<=n;row++)
    {
      for(col=row;col>=1;col--)
       {
         printf("%d",col%2);
       }

      printf("\n");
    }
return 0;
}