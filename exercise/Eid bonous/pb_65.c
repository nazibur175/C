#include<stdio.h>
int main()
{
int n,row,incriment,decrement;
 n=5;
    for(row=1;row<=n;row++)
       {
         for(incriment=1;incriment<=3;incriment++)
            {
              if((row==2 && incriment==3)||(row==4 && incriment==3))
              printf(" ");
              else if(row==3 && (incriment==2||incriment==3))
              printf(" ");
               else
               printf("%d",incriment);
            }

         for(decrement=2;decrement>=1;decrement--)
            {
               if(row==3 && decrement==2)        
               {
                  printf(" ");
               }
               else
               {
                   printf("%d",decrement);
               }           
            }
          printf("\n");
       }
 return 0;
}