#include<stdio.h>
int main()
{
int n,row,column;
n=5;
for(row=1;row<=n;row++)
{
  for(column=1;column<=n;column++)
    {
     printf("%d",column);
    }
  printf("\n");
}
return 0;
}