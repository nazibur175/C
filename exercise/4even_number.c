#include<stdio.h>
int main()
{
int n,i,sum=0;
 printf("Please Enter a limit for Even Number:\n");
  scanf("%d",&n);
 for(i=1;i<=n;i++)
  if(i%2==0) 
  {
    printf("%d\n",i);
    sum=sum+i;
  }
  printf("The Summation Of all even number is=%d",sum);
    
return 0;
}