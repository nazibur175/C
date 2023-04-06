#include<stdio.h>
int main()
{
  //int sum,mul,rem;
  float a,b,sum,mul,div;
  //float c=5.5;
  scanf("%f   %f",&a,&b);
  sum=a+b;
  mul=a*b;
  div=a/b;
 // rem=a%b;
  printf("SUM=%.1f  \nmul=%.1f \ndiv=%.2f",sum,mul,div);
  /*intiger---%d
  float ----%f
  double ----%lf
  charecter ----%c
  */
return 0;
}