#include<stdio.h>
int main()
{
int n,row,column;
n=5;
  for(row=1;row<=n;row++)
   {
     for(column=1;column<=n;column++)
       {
          if(row==1||row==n||column==1||column==n)
          {
            printf("3");
          }
          else if (row==2||row==n-1||column==2||column==n-1)
          {
             printf("2");
          }
          else 
          {
             printf("1");
          }
       }

     printf("\n");
   }
return 0;
}