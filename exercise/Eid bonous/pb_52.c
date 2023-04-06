#include<stdio.h>
int main()
{
int n,i,j,space,element;
 n=5;
for(i=n;i>=1;i--)
{
   for(space=1;space<=n-i;space++)
    {
      printf(" ");
    }
   for(element=1;element<=2*i-1;element++)
    { 
       printf("*");
    }
   printf("\n");  
}
for(i=2;i<=n;i++)
{
   for(space=1;space<=n-i;space++)
    {
      printf(" ");
    }
   for(element=1;element<=2*i-1;element++)
    { 
       printf("*");
    }
   printf("\n");  
}
return 0;
}