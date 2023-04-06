#include<stdio.h>
int main()
{
int a,b,h;
float area;
printf("Enter The Value of a,b and h\n");
scanf("%d%d%d",&a,&b,&h);
area=0.5*(a+b)*h;
printf("Area=%f",area);
return 0;
}