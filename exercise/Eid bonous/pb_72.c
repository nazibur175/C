#include<stdio.h>
int main()
{
int n,row,column,element=1;
 n=5;
for(row=1;row<=n;row++)
{
   for(column=1;column<=row;column++)
    {  
       printf("%d",element);
       element=element+1;
       if(element>9){element=1;} 
    }    
   printf("\n");  
}
return 0;
}