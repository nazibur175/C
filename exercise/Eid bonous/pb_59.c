#include<stdio.h>
int main()
{
int row,column,n;
 n=5;
  for(row=1;row<=n;row++)
   {
     for(column=1;column<=row;column++)
      {
        if(row%2==0)
        printf("%c",column+64);
        else
        printf("%d",column);
      }
    printf("\n");
   }
    
return 0;
}