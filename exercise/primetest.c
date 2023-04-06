#include<stdio.h>
int main()
{
int low,high,i,j,x=0;
scanf("%d%d",&low,&high);
for(i=low;i<=high;i++)
  {
     for(j=2;j<=i;j++)
     {
        if(i%j==0)    
        break;          
     }
     if(i==j)
     {
     printf("%d\n",i);
     x=x+1;
     } 
  }
     printf("Total Prime number is=%d\n",x); 
return 0;
}