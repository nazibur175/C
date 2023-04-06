#include<stdio.h>
#include<string.h>
int main()
{

    char a[100],b[100];
    scanf("%s %s",&a,&b);
    printf("%d",strcmp(strupr(a),strupr(b)));
    return 0;
}
