#include<stdio.h>
int main()
{
int row,column;
for(row=1;row<=4;row++)
{
   for(column=1;column<=2*row-1;column++)
    { 
       printf("%d",column);
    }
   printf("\n");  
}
return 0;
}