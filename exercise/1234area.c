#include <stdio.h>
int main()
{
  int a, b, h, r;
  float area;
  printf("Please Enter a Number\n");
  scanf("%d", &a);

  if (a == 1)
  {
    printf("please Enter the value of Base and Hight\n");
    scanf("%d%d", &b, &h);
    area = 0.5 * b * h;
    printf("%.2f", area);
  }

  else if (a == 2)
  {
    printf("please Enter the value of Radius\n");
    scanf("%d", &r);
    area = 3.14156 * r * r;
    printf("%.2f", area);
  }

  else if (a == 3)
  {
    printf("please Enter the value of A\n");
    scanf("%d", &a);
    area = a * a;
    printf("%.2f", area);
  }
  else if (a == 4)
  {
    printf("please Enter the value of A and B\n");
    scanf("%d%d", &a, &b);
    area = a * b;
    printf("%.2f", area);
  }

  return 0;
}