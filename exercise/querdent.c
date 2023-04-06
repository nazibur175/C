//quadrant নির্ণয় 
#include<stdio.h>
int main()
{
float x,y;
scanf("%f%f",&x,&y);
if(x==0 && y==0) printf("Center point");
else if(x==0) printf("Y Axix");
else if(y==0) printf("X Axix");
else if(x>0 && y>0) printf("1st Quadrant");
else if(x>0 && y<0) printf("2nd Quadrant");
else if(x<0 && y<0) printf("3rd Quadrant");
else printf("4th Quadrant");
return 0;
}