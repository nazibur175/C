#include<stdio.h>
int main()
{
int row,column,reduction=1;
for(row=6;row>=1;row--)
{
       {
         printf(" ");
       }
     for(column=1;column<=2*row;column++)
       {   
          if(column<=row)
             printf("%c",column+64);
          else 
             {      
             printf("%c",(column-reduction)+64); 
             reduction=reduction+2;
             }              
       }
      reduction=1;
      printf("\n");  
}
return 0;
}