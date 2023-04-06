#include<stdio.h>
int main()
{
int row,column,space;
for(row=1;row<=6;row++)
{
  for(space=1;space<=6-row;space++) printf(" ");
  for(column=1;column<=row;column++) printf("%d ",row);
  printf("\n");
}
return 0;
}