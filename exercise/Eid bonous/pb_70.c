#include<stdio.h>
int main()
{
int n,row,column,value=3;
 n=4;
   for(row=n;row>=1;row--)
    {
       if(row%2==0)
       {
          for(column=1;column<=row;column++)
            {
              printf("%d",column);
            }
       }
       else
       {
         for(column=1;column<=row;column++)
          {
            printf("%d",value);
            value++ ;
            if(value>4) {value=1;}
          }
          value=3;
       }
     printf("\n");
    }
return 0;
}