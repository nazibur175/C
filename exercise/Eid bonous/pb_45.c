#include<stdio.h>
int main()
{
int i,j,space,element;
for(i=1;i<=5;i++)
{
   for(space=1;space<=5-i;space++)
    {
      printf("  ");
    }
   for(element=1;element<=2*i-1;element++)
    { 
       printf("%d ",element);
    }
   printf("\n");  
}
return 0;
}