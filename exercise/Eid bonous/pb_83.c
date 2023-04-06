#include<stdio.h>
int main()
{
  int n,row,col,value;
   n=4572;
     for(value=10000;value>=10;value=value/10)
         printf("%d\n",n%value);   
return 0;
}