#include<stdio.h>
int main()
{
  int n,row,col;
   n=3;
   for(row=1;row<=n;row++)
      {
         for(col=1;col<=4;col++)
         {
            if(row%2==1) 
            {
              if((row==1 && col==1) || (row==3 && col==4)) 
                printf("1");
              else 
                 printf("3");
            }
            else 
                  printf("2");
         }
        printf("\n");
      }
return 0;
}