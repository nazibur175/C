 #include<stdio.h>
int main()
{
    int i,n,sum=0;
   scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }
        if(sum==n)
            printf("prefect number");
        else printf("n.p");
    return 0;
}