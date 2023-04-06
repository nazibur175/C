#include<stdio.h>
int main()
{
int n,row,column,space;
n=5;
  for(row=1;row<=n;row++)
   {  
     for(space=1;space<=row;space++)
        printf(" ");
      for(column=row;column<=n;column++)
        printf("%d ",column);
     printf("\n");
   }
return 0;
} 