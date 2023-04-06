#include<stdio.h>
int main()
{
 int n,row,increase,decrease;
  n=4;
 for(row=1;row<=n;row++)
      {
        for(increase=row;increase<=2*row-1;increase++)
          {
            printf("%d",increase);
          }
        for(decrease=2*row-2;decrease>=row;decrease--)
          {
            printf("%d",decrease);
          }
        printf("\n");
      }

return 0;
}