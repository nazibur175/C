#include<stdio.h>
int main()
{
int row,hash;
 for(row=1;row<=6;row++)
   {
     for(hash=5;hash>=row;hash--)
         printf("#");
         
     for(hash=1;hash<=2*row-1;hash++)
        {
           if(hash==1||hash==(2*row-1)) 
             {
               printf("*");
             }
           else 
             {
               printf("#");
             }
        }
      for(hash=5;hash>=row;hash--)
         printf("#");
      printf("\n");
    }
return 0;
}