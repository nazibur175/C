#include<stdio.h>
int main()
{
int a,b,c;
printf("Please Enter The values of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
  if(a==b && b==c) printf("All are Equal");
  else if (a>=b && a>=c) printf("%d is biggest",a);
  else if(b>=a && b>=c) printf("%d is biggest",b);
  else printf("%d is biggest",c);
return 0;
}