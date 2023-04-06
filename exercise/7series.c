#include<stdio.h>
int main()
{
int n,i,j,s=0;
scanf("%d",&n);
for(i=1,j=n; i<=n,j>=1; i++,j--)
 s=s+(i*j);
printf("%d",s);
return 0;
}