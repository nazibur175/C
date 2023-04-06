#include<stdio.h>
int main()
{
int n,row,column,space;
 n=5;
 for(row=n;row>=1;row--)
    {
      for(column=1;column<=row;column++)
            printf("*");
      for(space=1;space<=n-row;space++)
        printf("  ");
      for(column=1;column<=row;column++)
            printf("*");
       
      printf("\n");
    }
 return 0;
}