#include<stdio.h>
int main()
{
int a,b,c,i;
scanf("%d",&a);
for(i=1;i<=a;i=i+1){

    for(c=1;c<=i;c=c+1){
      printf("*");
    }
printf("\n");
}
return 0;
}