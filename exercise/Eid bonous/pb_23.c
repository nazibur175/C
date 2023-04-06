#include<stdio.h>
int main()
{
int row,column,space,reduction=2;
for(row=1;row<=5;row++)
{
     for(space=1;space<=5-row;space++)
       {
         printf("  ");
       }
     for(column=1;column<=2*row-1;column++)
       {   
          if(column<=row)
             printf("%c ",column+64);
          else 
             {      
             printf("%c ",(column-reduction)+64); 
             reduction=reduction+2;
             }              
       }
      reduction=2;
      printf("\n");  
}
return 0;
}