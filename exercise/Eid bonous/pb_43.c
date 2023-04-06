#include<stdio.h>
int main()
{
int n,row,column,value=9;
  n=5;
  for(row=1;row<=n;row++)
    {
      for(column=1;column<=row;column++)
          {
            printf("%d ",value%10);
             value=value+1;              
          }
      printf("\n");
    }
return 0;
}