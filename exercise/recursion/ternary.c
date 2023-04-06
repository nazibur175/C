#include<stdio.h>
#include<string.h>
int main()
{
long long int n,x,y,i,j;
char a[31];

while(scanf("%lld",&n)!=EOF)
{
  x=n,y=0,i=0;
  if(x<0) break;
  else if(x==0)
  printf("0");
  else 
  {
  while(x>0)
  {
    y=x%3;
    a[i]=y;
    x=x/3;
    i++;
  }
  for(j=i-1;j>=0;j--)
  {
    printf("%lld",a[j]);
    a[j]=0;
  }
  }
  printf("\n");
  x=0;
}
return 0;
}