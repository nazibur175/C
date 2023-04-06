#include<stdio.h>
#include<string.h>
int main()
{

    char s[101];
    int i,l,c=0;

    scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(s[i]!=' ' && s[i]==s[j])
            {
                 c++;
                 s[j]=' ';
            }

        }
    }

    if((l-c)%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}
