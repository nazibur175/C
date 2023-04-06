#include<stdio.h>
int main()
{
    int i,a[4],c=0;

    for(i=0;i<4;i++)
    {
       scanf("%d",&a[i]);
    }

    for(i=0;i<3;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(a[i]!=0 && a[i]==a[j])
            {
              c++ ;
              a[j]=0;
            }


        }
    }
    printf("%d\n",c);

    return 0;
}
