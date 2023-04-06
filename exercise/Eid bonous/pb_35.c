#include<stdio.h>
int main()
{
int n,row,column,space,decrement,incriment;
n=4;
 for(row=1;row<=n;row++)
  { 
      for(space=1;space<=n-row;space++)
          printf(" ");
      for(decrement=row;decrement>=1;decrement--)
          printf("%d",decrement);
      for(incriment=2;incriment<=row;incriment++)
          printf("%d",incriment);
      printf("\n");        
  }
  for(row=n-1;row>=1;row--)
  { 
      for(space=1;space<=n-row;space++)
          printf(" ");
      for(decrement=row;decrement>=1;decrement--)
          printf("%d",decrement);
      for(incriment=2;incriment<=row;incriment++)
          printf("%d",incriment);
      printf("\n");        
}
return 0;
}