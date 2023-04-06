#include<stdio.h>
int main()
{
int n,row,column,element=5,space;
n=5;
for(row=n;row>=1;row--)
{ 
  for(space=1;space<=n-row;space++)
     printf("        "); 
  for(column=1;column<=row;column++)
    {
      printf("%d\t",column);
    }
  printf("\n"); 
}
return 0;
}