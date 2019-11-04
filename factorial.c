#include <stdio.h>

int factorial(int n) {
   
   if(n <= 1) {
      return 1;
   }
   // n! = n x (n-1)!
   return n * factorial(n - 1);
}

int  main() {
   int n = 2;

   printf("Factorial de %d is %d\n", n, factorial(n));

   return 0;
}

