#include<stdio.h>
int main()
{
int n,row,column,space;
 n=4;
 for(row=n;row>=1;row--)
    {
      for(column=1;column<=row;column++)
            printf("%d",column);
      for(space=1;space<=n-row;space++)
        printf("__");
      for(column=row;column>=1;column--)
            printf("%d",column);
       
      printf("\n");
    }
 return 0;
}