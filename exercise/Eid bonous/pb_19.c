#include<stdio.h>
int main()
{
int n,row,column,space;
n=6;
for(row=1;row<=n;row++)
{
   for(space=1;space<=n-row+1;space++)
    {
      printf("        ");
    }
   for(column=1;column<=2*row-1;column++)
    { 
       printf("*\t");
    }
   printf("\n");  
}
return 0;
}