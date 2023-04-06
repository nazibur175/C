#include<stdio.h>
#include<string.h>
int main()
{
    int t,sum=0;
    int a[1005];
    char s[10];
    scanf("%d",&t);
    //cin>>t;
    for(int i=0;i<t;i++)
    {
        //cin>>a[i];
        scanf("%d",&a[i]);
    }
    scanf("%s",&s);
    if(s[0]=='g')
    {
        for(int i=1;i<t;i=i+2)
            sum=sum+a[i];
    }
    else
        for(int i=0;i<t;i=i+2)
            sum=sum+a[i];
    printf("%d\n",sum);
    return 0;

}
