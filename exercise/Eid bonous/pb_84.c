#include<stdio.h>
int main()
{
int n,row,value=1,i;
  n=7;
  for(row=1;row<=n;row++)
     {
       if(row%2==1)
         {
            printf("%d",value);
            value++;
         }
        else
        {
           for(i=1;i<=2;i++)
           {
               printf("%d",value);
                value++;
           }          
        }
        printf("\n");
     }
return 0;
}