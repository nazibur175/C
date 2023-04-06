#include<stdio.h>
int main()
{
int row,column,element=1,last_element=1;
 for(row=1;row<=4;row++)
 {
  for(column=1;column<=row;column++)
   {
     printf("%d ",element);
     element++;
   }
    printf("\n");
 }
return 0;
}