#include<stdio.h>
int main()
{
int row,column,value=1,c=0,x=0;
for(row=1;row<=3;row++)
{
  for(column=1;column<=x+row;column++)
  {
     printf("%d ",value);
     value=value+2;
     c=column;
  }
   x=c;
  printf("\n");
}
return 0;
}