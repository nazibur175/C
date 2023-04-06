#include<stdio.h>
int main()
{
int n,row,incriment,decrement;
n=5;
 for(row=1;row<=n;row++)
  { 
      for(incriment=1;incriment<=row;incriment++)
          printf("%d",incriment);
      for(decrement=row-1;decrement>=1;decrement--)
          printf("%d",decrement);
      
      printf("\n");        
  }
return 0;
}