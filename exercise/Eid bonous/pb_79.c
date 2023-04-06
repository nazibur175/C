#include<stdio.h>
int main()
{
int n=4,row,column;
  for(row=1;row<=4;row++)
    {
      for(column=1;column<=6;column++)
        {
           if(row==1||row==4||column==1||column==6)
           printf("*");
           else printf(" ");
        }
      printf("\n");
    }
return 0;
}