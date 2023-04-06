#include<stdio.h>
int main()
{

    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[11];
    int n;
    printf("Please Enter a value for Insert on 5th position:");
    scanf("%d",&n);
    for(int i=0;i<11;i++)
    {
        if(i<4)
        {
            b[i]=a[i];
        }
        else if(i==4)
        {
            b[i]=n;
        }
        else
            b[i]=a[i-1];

    }

     for(int i=0;i<11;i++)
     {
        printf("%d ",b[i]);
     }



   return 0;

}
