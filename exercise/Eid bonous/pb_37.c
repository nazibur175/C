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
          printf("%c",incriment+64);
      for(decrement=row-1;decrement>=1;decrement--)
          printf("%c",decrement+64);
      
      printf("\n");        
  }
  for(row=n-1;row>=1;row--)
  { 
      for(space=1;space<=n-row;space++)
          printf(" ");
      for(incriment=1;incriment<=row;incriment++)
          printf("%c",incriment+64);
      for(decrement=row-1;decrement>=1;decrement--)
          printf("%c",decrement+64);
      
      printf("\n");        
  }
return 0;
}