#include<stdio.h>
int main()
{
int row,column;
 for(row=1;row<=4;row++)
   {
     for(column=1;column<=row;column++)
       printf("*");
    printf("\n");
   }
   for(row=4-1;row>=1;row--)
   {
     for(column=1;column<=row;column++)
       printf("*");
    printf("\n");
   }
return 0;
}