#include<stdio.h>
int main()
{
int a,b;
float quotient,reminder;
scanf("%d%d",&a,&b);
quotient=a/b;
reminder=a%b;
printf("%.2f\n%.2f",quotient,reminder);
return 0;
}