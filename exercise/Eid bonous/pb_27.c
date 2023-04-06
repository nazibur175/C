#include<stdio.h>
int main()
{
 int row,column;
 for(row=1;row<=4;row++)
  {
   for(column=1;column<=row;column++)
    { printf("%c ",row+64); }
    printf("\n");
  }
 for(row=4-1;row>=1;row--)
  {
   for(column=1;column<=row;column++)
    { printf("%c ",row+64); }
    printf("\n");
  }
return 0;
}