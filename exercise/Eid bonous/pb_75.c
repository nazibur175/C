#include<stdio.h>
int main()
{
int n,row,col,space;
  n=5;
  for(row=1;row<=n;row++)
    {
      for(col=row;col>=1;col--)
       {
         printf("%d",col);
       }
       
       for(space=1;space<=n-row+1;space++)
         printf(" ");

       for(col=row;col>=1;col--)
       {
         printf("%c",col+96);
       }
      
      printf("\n");
    }
return 0;
}