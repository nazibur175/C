#include<stdio.h>
int main()
{
 int n,row,increase,decrease;
  n=5;
 for(row=n;row>=1;row--)
      {
        for(increase=row;increase<=n;increase++)
          {
            printf("%d",increase);
          }
        for(decrease=n-1;decrease>=row;decrease--)
          {
            printf("%d",decrease);
          }
        printf("\n");
      }

return 0;
}