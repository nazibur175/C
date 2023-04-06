#include<stdio.h>
int main()
{
int row,column,n;
  n=5;
  for(row=1;row<=n;row++)
    {
      for(column=5;column>=row;column--)
        printf("%d",column);
      printf("\n");
    }
return 0;
}