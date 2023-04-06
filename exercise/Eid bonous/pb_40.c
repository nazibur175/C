#include<stdio.h>
int main()
{
int row,column,space;
for(row=1;row<=5;row++)
{
  for(space=1;space<=5-row;space++) printf(" ");
  for(column=1;column<=row;column++)
  {
    printf("%c",column+64);
  }
    printf("\n");
}
for(row=5-1;row>=1;row--)
{
  for(space=1;space<=5-row;space++) printf(" ");
  for(column=1;column<=row;column++)
  {
    printf("%c",column+64);
  }
    printf("\n");
}
return 0;
}