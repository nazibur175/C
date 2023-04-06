#include<stdio.h>
int main()
{
int n,row,column;
  n=5;
  for(row=n;row>=1;row--)
      {
        for(column=row;column<=n;column++)
        printf("%d",column);

        printf("\n");
      }
return 0;
}