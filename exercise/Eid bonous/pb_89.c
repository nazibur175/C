#include<stdio.h>
int main()
{
  int n,row,col,count=0,start=7,x;
  n=4;
    for(row=1;row<=n;row++)
     {
       for(col=start;col<=start+x;col++)
       {
          printf("%d ",col);
          count++;
       }
       
       start=start*2;
       x=count;
       printf("\n");
     }
return 0;
}