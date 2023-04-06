#include<stdio.h>
int main(){

 int t,a,b,sum,i,j;
   scanf("%d",&t);
 for(i=1;i<=t;i++) {
 sum=0;
 scanf("%d %d",&a,&b);

 for(j=a;j<=b;j++);{  
   if(j%2==1)
    sum=sum+j;
 }
   printf("Case %d: %d\n",i,sum);
 }
return 0;
}