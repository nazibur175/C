#include<stdio.h>
int main()
{
int row,column,space,incriment=0,decrement=0; 
for(row=5;row>=1;row--)
{
     for(space=1;space<=5-row;space++)
       {
         printf(" ");
       }
     for(column=1;column<=2*row-1;column++)
       {           
          if(column<=row)
          {
             printf("%d",space+incriment);
             incriment=incriment+1;
             decrement=space+incriment-1;
          }          
          else 
             {      
             decrement=decrement-1;
             printf("%d",(decrement));             
             }              
       }
       incriment=0;
      printf("\n");  
}
return 0;
}