#include<stdio.h>
int main()
{
int row,column,space;
for(row=5;row>=1;row--)
{ 
  for(column=row;column>=1;column--)
    {
      printf("%c",column+64);
    }
    printf("\n");
}
return 0;
}