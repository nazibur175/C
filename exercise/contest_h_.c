#include<stdio.h>
int main()
{
long long int n=0,c=0,x=0;
scanf("%lld",&n);
  while(n!=0)
    {
       x=n%10;
       if(x==4 || x==7) c=c+1;
       n=n/10;      
    }
if(c==4 || c==7) printf("YES");
else printf("NO");
return 0;
}