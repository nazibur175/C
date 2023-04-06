#include<stdio.h>
int main()
{
    int n,row,space,incriment,decrement;
    n=5;
    for(row=1;row<=n;row++)
    {
        for(space=1;space<=row;space++)
        {
            printf("  ");
        }
        for(incriment=row;incriment<=n;incriment++)
        {
            printf("%c ",incriment+64);
        }
        for(decrement=n-1;decrement>=row;decrement--)
        {
            printf("%c ",decrement+64);
        }
        printf("\n");
    }
    return 0;
}