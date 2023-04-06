#include<stdio.h>
#include<string.h>
int main()
{
  int n,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    char s[99];
   scanf("%s",s);
   int l=strlen(s);
   if(l<=10)
   printf("%s\n",s);
   else 
   printf("%c%d%c\n",s[0],l-2,s[l-1]);
  }
return 0;
}