#include<stdio.h>
int main()
{
int row,column,n;
n=10;
for(row=1;row<=n;row++)
  {
      for(column=1;column<=row;column++)
         {
           if(row==1 || row==10 || column==1 || row==column)
               printf("*");
           else printf(" ");
         }   
      printf("\n");
  }
return 0;
}