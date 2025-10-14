
#include <stdio.h>
#include <string.h>


typedef union {
   char string[50];
   int numero;
   
} Data;

    

int main() {
   
   Data dado1
   
   dado1.numero = 99;
   
   printf("O numero eh: %d\n", dado1.numero)

    return 0;
}
