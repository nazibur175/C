#include<stdio.h>
int main()
{
int n,row,column,space,decrement,incriment;
n=4;
 for(row=1;row<=n;row++)
  { 
      for(space=1;space<=row;space++)
          printf(" ");
      for(incriment=1;incriment<=n+1-row;incriment++)
          printf("%c",incriment+64);
      for(decrement=n-row;decrement>=1;decrement--)
          printf("%c",decrement+64);     
      printf("\n");        
  } 
return 0;
}