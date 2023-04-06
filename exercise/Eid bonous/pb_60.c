#include<stdio.h>
int main()
{
 int n,row,column,space,value=1;
  n=4;
   for(row=1;row<=n;row++)
      {  
         for(space=1;space<=n-row+1;space++)
           {
             printf(" ");
           }
         for(column=1;column<=row;column++)
           {
             printf("%d ",value);
             value=value+1;
           }

        printf("\n");
      }
return 0;
}