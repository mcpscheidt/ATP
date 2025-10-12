#include <stdio.h>
#include <string.h>


typedef union {
   int x;
   float y;
} Values;



int main() {
    Values valor1; Values valor2;


    valor1.x = 10.1;
    valor2.y = 10.1;


    printf("Valor inteiro: %d\n", valor1.x);
    printf("Valor float: %f", valor2.y);
    return 0;
}
