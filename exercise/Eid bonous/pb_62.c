#include<stdio.h>
int main()
{
int n,row,column,value;
  n=5;
  for(row=1;row<=n;row++)
     {  
             if(row%2==1)
                {   
                    value=1;
                   for(column=1;column<=row;column++)
                     {
                         printf("%c",value+64);
                         value++; 
                         if(value>2) value=1;
                     }
                }
             else 
                {
                   value=2;
                   for(column=1;column<=row;column++)
                     {   
                         printf("%c",value+64);
                         value++;
                         if(value>2) value=1;
                     }
                }   
      printf("\n");
     }
return 0;
}