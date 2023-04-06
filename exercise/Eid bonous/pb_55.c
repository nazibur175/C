#include<stdio.h>
int main()
{
 int row,column,n,c=0;
 n=3;
  for(row=1;row<=n;row++)
   {
     for(column=1;column<=c+row;column++)
       {
         printf("*");
       }
     c=column-1;
     printf("\n");
   }
return 0;
}