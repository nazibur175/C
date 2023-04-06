#include<stdio.h>
int main()
{
int n,row,column,space;
n=5;
for(row=1;row<=n;row++)
{ 
   for(space=1;space<=n-row;space++)
      printf("        ");

   for(column=1;column<=row;column++)
      printf("%d\t",column);

   printf("\n"); 
}
return 0;
}