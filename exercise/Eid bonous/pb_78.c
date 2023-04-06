#include<stdio.h>
int main()
{
int n=4,row,column;
  for(row=1;row<=4;row++)
    {
      for(column=1;column<=7;column++)
        {
           if(row==1||row==4||column==1||column==7)
             {
               if((row==1||row==4) && (column==1||column==7))
                 printf(" ");
               else printf("*");
             }
           else printf(" ");
        }
      printf("\n");
    }
return 0;
}