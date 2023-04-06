#include<stdio.h>
int main()
{
int n,row,col;
  n=4;
  for(row=1;row<=n;row++)
    {
        for(col=1;col<=2*row-1;col++)
          {
            if(col%2==0) printf("*");
            else printf("%d",row);
          }
        printf("\n");
    }
    for(row=4;row>=1;row--)
    {
        for(col=1;col<=2*row-1;col++)
          {
            if(col%2==0) printf("*");
            else printf("%d",row);
          }
        printf("\n");
    }
return 0;
}