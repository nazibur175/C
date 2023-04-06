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
             printf("%d",column);
          else 
             {      
             printf("%d",(column-reduction)); 
             reduction=reduction+2;
             }              
       }
      reduction=1;
      printf("\n");  
}
return 0;
}