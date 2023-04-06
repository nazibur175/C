#include<stdio.h>
int main()
{
int row,column,space,coef=1;
for(row=0;row<4;row++)
{
   for (space = 1; space <= 4 - row; space++)
         printf("  ");
   for(column=0;column<=row;column++)
        {
          if (column == 0 || row == 0)
            coef = 1;
         else
            coef = coef * (row - column + 1) / column;
         printf("%4d", coef);
        }
     printf("\n");
}
return 0;
}