#include<stdio.h>

float area_triangle(float b,float h)
{

    float area;
    area=0.5*b*h;
    return area;
}

float circle_area(float r)
{

    float area;
    area=3.14156*r*r;
    return area;
}

float circle_square(float a)
{

    float area;
    area=a*a;
    return area;
}


float circle_trapizium(float a,float b,float h)
{

    float area;
    area=0.5*(a+b)*h;
    return area;
}


int main()
{

    float b,h,y;
    printf("Enter the value of b and h:\n");
    scanf("%f%f",&b,&h);
    y=area_triangle(b,h);
    printf("Area of the triangle is=%.3f\n",y);


    float r;
    printf("Enter the value of r:\n");
    scanf("%f",&r);
    y=circle_area(r);
    printf("Area of the radious is=%.3f\n",y);


    float a;
    printf("Enter the value of a:\n");
    scanf("%f",&a);
    y=circle_square(a);
    printf("Area of the radious is=%.3f\n",y);


    printf("Enter the value of a,b,h:\n");
    scanf("%f%f%f",&a,&b,&h);
    y=circle_trapizium(a,b,h);
    printf("Area of the trapizium is=%.3f\n",y);


    return 0;
}
