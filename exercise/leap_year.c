//leap year or not 
#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a%400==0)printf("Leap Year");
else if(a%4==0 && a%100!=0) printf("Leap Year");
else printf("Not leap year");
return 0;
}