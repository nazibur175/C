#include<stdio.h>
int main()
{
int n,row,number=1,c=1,x=0,character,d=1,y=0;
  n=5;
   for(row=1;row<=n;row++)
    {
      if(row%2==1) 
      { 
        for(number=c;number<=c+row-1;number++) 
         {     
        printf("%d ",number);
        x=number;
         }
        c=x+1; 
      }
      else 
      { 
        for(character=d;character<=d+row-1;character++) 
         {     
        printf("%c ",character+64);
        y=character;
         }
        d=y+1; 
      }
      printf("\n");
    }
return 0;
}