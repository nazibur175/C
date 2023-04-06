#include<stdio.h>
int main()
{
int n,row,column;
n=5;
for(row=1;row<=n;row++)
{ 
  for(column=1;column<=row;column++)
    {
      printf("#\t");
    }
  printf("\n");
}
return 0;
}