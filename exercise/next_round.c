#include<stdio.h>
int main()
{
int n,k,i,x[100],count=0,y=0;
 scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
  { 
     scanf("%d",&x[i]);
     if(i==k-1)
    {
       y=x[i];
    }
  }

  for(i=0;i<n;i++)
  {
    
     if(x[i]>=y && x[i]>0)
     {
       count=count+1;
     }
  }
  printf("%d\n",count);
return 0;
}