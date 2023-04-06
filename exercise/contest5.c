#include<stdio.h>
int main()
{
long long int x,a,b,c,j=0;
scanf("%lld%lld%lld%lld",&x,&a,&b,&c);
a=a+1;
b=b+1;
c=c+1;
j=a+b+c;
//if (x>=1)
    if(x>=j)
     printf("YES");
    else if( x>=(a+b) || x>=(a+c) || x>=(b+c))
    printf("NO 2");
    else if(x>=a || x>=b || x>=c)
    printf("NO 1");
    //else if (x<a || x<b || x<c) 
    else printf("NO 0");
    return 0;
}