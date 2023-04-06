#include<stdio.h>
int main()
{
  int n,row,col;
   n=5;
   for(row=1;row<=n;row++)
      {
        for(col=1;col<=row;col++)
          {
            if(row%2==1)
               {
                  if(col%2==0) printf("*");
                   else printf("%d",col);
               }
            else
               {
                   if(col%2==1) printf("*");
                   else printf("%d",col);
               }
          }
        printf("\n");
      }
return 0;
}