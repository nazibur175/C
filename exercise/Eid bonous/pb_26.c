#include<stdio.h>
int main()
{
 int row,column;
 for(row=1;row<=5;row++)
   {
     for(column=1;column<=row;column++)
       {
         if(column==1 || column==4) printf("I");
         else if(column==2) printf("N");
         else if(column==3) printf("D");
         if(column==5) printf("A");      
       }
       printf("\n");
    }
      for(row=5;row>=1;row--)
      {
        for(column=1;column<=row;column++)
          {
            if(column==1 || column==4) printf("I");
            else if(column==2) printf("N");
            else if(column==3) printf("D");
            if(column==5) printf("A");      
          }
        printf("\n");
      }
 return 0;
 }