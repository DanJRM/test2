#include <string.h>
int main () {
   char saludo[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
   strcpy ( saludo, "Adios" );
   printf("Saludo: %s\n", saludo );
   return 0;
}
