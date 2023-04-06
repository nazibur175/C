#include<stdio.h>
int main()
{
int x1,y1,x2,y2,x3,y3,p,q;
long long int area_abc=0,area_apb=0,area_bpc=0,area_apc=0,total_area=0;
scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&p,&q);
area_abc=0.5*((x1*y2-x2*y1)+(x2*y3-x3*y2)+(x3*y1-x1*y3));
if(area_abc<0) area_abc=area_abc*(-1);
area_apb=0.5*((x1*q-p*y1)+(p*y2-x2*q)+(x2*y1-x1*y2));
if(area_apb<0) area_apb=area_apb*(-1);
area_bpc=0.5*((x2*q-p*y2)+(p*y3-x3*q)+(x3*y2-x2*y3));
if(area_bpc<0) area_bpc=area_bpc*(-1);
area_apc=0.5*((x1*q-p*y1)+(p*y3-x3*q)+(x3*y1-x1*y3));
if(area_apc<0) area_apc=area_apc*(-1);

total_area=area_apb+area_apc+area_bpc;
if(area_apb==0 || area_apc==0 || area_bpc==0) printf("On the edge");
else if(area_abc==total_area) printf("Inside");
else printf("Outside");

return 0;
}