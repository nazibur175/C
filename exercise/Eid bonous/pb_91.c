
#include<stdio.h>
int main()
{
int n,row,col,incriment,space;
n=5;
 for(row=5;row>=1;row--)
  { 
      for(space=1;space<=n-row;space++)
          printf(" ");
      for(col=row;col>=1;col--)
          printf("%d",col);
      for(incriment=2;incriment<=row;incriment++)
          printf("%d",incriment);
      printf("\n");        
  }
           
return 0;
}