//দুটি সংখ্যার মধ্যে বড় সংখ্যা নির্নয়  
#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
if(a>b) printf("%d",a);
else printf("%d",b);
return 0;
}

/*
//তিনটি সংখ্যার মধ্যে বড় সংখ্যা বড় সংখ্যা নির্ণয়
#include<stdio.h>
int main()
{
int a,b,c;
printf("Please Enter The values of a,b,c\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a==b && b==c) printf("%d=%d=%d",a,b,c);
  else if (a>=b && a>=c) printf("%d is biggest",a);
  else if(b>=a && b>=c) printf("%d is biggest",b);
  else printf("%d is biggest",c);
return 0;
}
*/