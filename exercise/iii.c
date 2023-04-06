#include<stdio.h>
#include<math.h>
int main()
{
    int i,l,w,x;
    scanf("%d%d",&l,&w);
    float d,dx=100000;
    //for(int i=1;i<l;i++)
    //{
        i=8;
        d=(2*i+(w-(sqrt(i*i-(l-i)))));
        //if(d<dx)
        //{
           //dx=d;
           //printf("%d\n",i);
        //}

    //}
    printf("%f",d);



    return 0;
}
