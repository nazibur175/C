#include<stdio.h>
int main()
{
int a,b;
char x;
printf("enter an oparetor:");
scanf("%c",&x);
printf("please Enter Two Number:");
scanf("%d %d",&a,&b);
switch(x)
{
case '+':
printf("%d + %d = %d",a,b,a+b);
break;

case '-':
printf("%d - %d = %d",a,b,a-b);
break;

case '*':
printf("%d * %d = %d",a,b,a*b);
break;

case '/':
printf("%d / %d = %d",a,b,a/b);
break;

}
return 0;
}