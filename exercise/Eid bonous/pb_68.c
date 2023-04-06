#include<stdio.h>
int main()
{
 int n,row,incriment;
   n=4;
    for(row=1;row<=n;row++)
     {
        for(incriment=row;incriment<=n;incriment++)
          {
             printf("%d",incriment);
          }
        for(incriment=1;incriment<=row-1;incriment++)
          {
             printf("%d",incriment);
          }
       printf("\n");
     }
return 0;
}