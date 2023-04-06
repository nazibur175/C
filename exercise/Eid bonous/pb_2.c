#include<stdio.h>
int main()
{
int n,row,col,space;
n=5;
for(row=1;row<=n;row++)
{ 
    for(space=1;space<=row;space++)
         printf("        ");
    for(col=row;col<=n;col++)
         printf("#\t");
    printf("\n");
}
return 0;
}