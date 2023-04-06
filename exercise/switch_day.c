#include<stdio.h>
int main()
{
int a;
printf("please Enter a Number:");
scanf("%d",&a);
switch (a)
{
case 1:
printf("Saturday");
break;

case 2:
printf("Sunday");
break;

case 3:
printf("Monday");
break;

case 4:
printf("Twesday");
break;

case 5:
printf("Wednesday");
break;

case 6:
printf("Thursday");
break;

case 7:
printf("Friday");
break;

default :
printf("Its not a day");
}
return 0;
}