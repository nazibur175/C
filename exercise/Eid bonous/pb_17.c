#include<stdio.h>
int main()
{
int n,row,column,space,reduction=2;
n=5;
for(row=1;row<=n;row++)
{
     for(space=1;space<=n-row;space++)
       {
         printf("        ");
       }
     for(column=1;column<=2*row-1;column++)
       {   
          if(column<=row)
             printf("%d       ",column);
          else 
             {      
             printf("%d       ",(column-reduction)); 
             reduction=reduction+2;
             }              
       }
      reduction=2;
      printf("\n");  
}
return 0;
}