#include<stdio.h>
int main()
{
int n,i,j,flag=1;
scanf("%d",&n);
for(i=2;i<=n;i++)
{   
  for(j=2;j<=i/2;j++) 
  {
    if(i%j==0) flag=0;
    if(flag==1) printf("%d\n",i);
  }
}
return 0;
}