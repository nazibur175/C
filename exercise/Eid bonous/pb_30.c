#include<stdio.h>
int main()
{
int row,column,space;
for(row=1;row<=5;row++)
{ 
  for(space=0;space<=5-row;space++) printf(" ");
  for(column=row;column>=1;column--)
    {
      printf("%d",column);
    }
    printf("\n");
}
return 0;
}