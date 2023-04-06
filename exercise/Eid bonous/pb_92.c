#include<stdio.h>
int main()
{
    int n,row,col,speace,decrement;
    n=5;
    for(row=n;row>=1;row--)
    {
        for(speace=1;speace<=row;speace++)
        {
            printf(" ");
        }
        for(col=row;col<=n;col++)
        {
            printf("%d",col);
        }
        for(decrement=n-1;decrement>=row;decrement--)
        {
            printf("%d",decrement);
        }
        printf("\n");
    }

    return 0;
}