#include <stdio.h>

void intercambio(float x, float y) {

   float temp;

   temp = y;
   printf("TEMP vale: %f\n",temp);
   y = x;   
   x = temp;
  
   return;
}
 
int main () {

  
   float a = 100;
   float b = 200;
 
   printf("Antes del intercambio,valor de a: %f\n", a );
   printf("Antes del intercambio, valor de b: %f\n", b );
 
   
   intercambio(a,b);
 
   printf("Después del intercambio, valor de a: %f\n", a );
   printf("Después del intercambio, valor de b: %f\n", b );
 
   return 0;
}

