#include<stdio.h>
int main()
{

    int t,x,i,c;
    scanf("%d",&t);

    while(t--)
    {
        c=0;
      scanf("%d",&x);
      for(i=1;i<=2000;i++)
      {
          if(i%3 !=0 && i%10!=3)
          {
              c++ ;
              if(c==x)
              {
                  printf("%d\n",i);
                  break;
              }
          }
      }
    }




    return 0;
}
