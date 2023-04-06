#include<stdio.h>
int main()
{
long long int n,i,x;
scanf("%lld",&n);
//for(i=10;i<=1000000000000000000;i=i*10)
//{ 
  while(n>=1)
    {
       x = n%10;
       if(x==0 || x!=4 || x!=7) break;
       n=n/10;
       
    }
//printf("%lld",n);
if(x==4 || x==7) printf("YES");
else printf("NO");
return 0;
}