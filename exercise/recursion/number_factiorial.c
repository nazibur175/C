//Calculates the factorial of a given number using a recursive function
#include <stdio.h>

unsigned long long int factorial(unsigned int i) {

   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}

int  main() {
   int i = 1000;
   printf("Factorial of %d is %d\n", i, factorial(i));
   return 0;
}