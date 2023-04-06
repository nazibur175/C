#include<stdio.h>
int main()
{
float f,c;
scanf("%f",&f);
c=(5*(f-32))/9;
//c=(f-32)/1.8;
printf("%.2f",c);
return 0;
}