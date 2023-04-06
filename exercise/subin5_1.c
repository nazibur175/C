#include<stdio.h>
int main()
{
int a,b,c,d,i;
scanf("%d",&a);
for(i=1;i<=a;i++)
{
 scanf("%d",&b);
 for(c=1;c<=b;c++){
 for(d=1;d<=b;d++){
  printf("*");
  }printf("\n");
 }
}
return 0;
}