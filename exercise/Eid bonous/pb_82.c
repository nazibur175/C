#include<stdio.h>
int main()
{
  int n,row,col,col2;
   n=3;
   for(row=1;row<=n;row++)
      {       
         for(col=1;col<=row;col++)  
           {
             printf("*");
           }   
          printf(" ");
          for(col=1;col<=n-row+1;col++)
            {
              printf("*");
            }
          printf(" ");


          for(col=1;col<=n-row+1;col++)  
           {
             printf("*");
           }   
          printf(" ");
          for(col=1;col<=row;col++)
            {
              printf("*");
            }
          printf(" ");
        printf("\n");
      }
return 0;
}