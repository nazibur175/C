#include<stdio.h>
int main()
{
int n,row,column,space,decrement,incriment;
n=4;
 for(row=1;row<=n;row++)
  { 
      for(space=1;space<=n-row;space++)
          printf(" ");
      for(incriment=1;incriment<=row;incriment++)
          printf("%d",incriment);
      for(decrement=row-1;decrement>=1;decrement--)
          printf("%d",decrement);
      
      printf("\n");        
  }
  for(row=n-1;row>=1;row--)
  { 
      for(space=1;space<=n-row;space++)
          printf(" ");
      for(incriment=1;incriment<=row;incriment++)
          printf("%d",incriment);
      for(decrement=row-1;decrement>=1;decrement--)
          printf("%d",decrement);
      
      printf("\n");        
  }
return 0;
}