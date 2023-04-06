#include<stdio.h>
int main()
{
int n,row,column;
n=5;
 for(row=5;row>=1;row--)
 {
  for(column=1;column<=row;column++)
    {
     printf("@ ");
    }
  printf("\n");
}
return 0;
}