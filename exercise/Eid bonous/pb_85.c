#include<stdio.h>
int main()
{
  int n,row,col;
   n=5;
   for(row=1;row<=n;row++)
      {       
         for(col=1;col<=row;col++)
           printf("%d",col);
         if(row>1)
           printf("1\n"); 
         else printf("\n");     
      }
return 0;
}