#include<stdio.h>
int main()
{
int n,l;
scanf("%d",&n);
for(l=1;l<=n;l++)
{
int i,j,k;
scanf("%d",&k);
for(i=1;i<=k;i++)
{
 for(j=1;j<=k;j++)
{
 printf("*");
}
printf("\n");
}
}
return 0;
}