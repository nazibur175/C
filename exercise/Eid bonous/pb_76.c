#include<stdio.h>
int main()
{
int row,column,n;
n=5;
for(column=1;column<=10;column++)
         printf("*");
         printf("\n");
for(row=1;row<=n-1;row++)
{
  for(column=1;column<=n-row;column++)
  printf("*");
  printf("\n");
}

for(row=n-1;row>=1;row--)
{
  for(column=1;column<=n-row;column++)
  printf("*");
  printf("\n");
}

 
return 0;
}