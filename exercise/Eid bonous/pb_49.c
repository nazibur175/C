#include<stdio.h>
int main()
{
 int n1,n2,row,increase,decrease;
  n1=9;
  n2=6;
 for(row=n1;row>=n2;row--)
      {
        for(increase=row;increase<=n1;increase++)
          {
            printf("%d",increase);
          }
        for(decrease=n1-1;decrease>=row;decrease--)
          {
            printf("%d",decrease);
          }
        printf("\n");
      }
return 0;
}