#include<stdio.h>
int main()
{
int n,row,column;
 n=4;
  for(row=1;row<=n;row++)
    {
      for(column=1;column<=row;column++)
       printf("%c ",row+64);

      printf("\n");
    }
return 0;
}