#include<stdio.h>
int main()
{
int a,b,h;
float area;
printf("Please Enter The Values of Two Parallel Sides and Height Of A Trapizium:\n");
scanf("%d%d%d",&a,&b,&h);
area=0.5*(a+b)*h;
printf("%.2f",area);
return 0;
}