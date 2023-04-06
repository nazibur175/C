#include<stdio.h>
int main()
{
int a,b,div,rem;
scanf("%d%d",&a,&b);
div=a/b; 
rem=a%b; 
printf("Quotient=%d\nRemainder=%d",div,rem);
return 0;
}