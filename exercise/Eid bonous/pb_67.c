#include<stdio.h>
int main()
{
int row,column;
for(row=5;row>=1;row--)
{
   for(column=1;column<=2*row-1;column++)
    { 
       printf("*");
    }
   printf("\n");  
}
return 0;
}