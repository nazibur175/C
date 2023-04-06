#include<stdio.h>
int main()
{
 int n,row,col,start=9;
  n=5;
  for(row=1;row<=n;row++)
    {
       for(col=start;col>=start-(row-1)*2;col=col-2)
         {
            printf("%d ",col);

         }
         start=col+3;
       printf("\n");
    }
return 0;
}