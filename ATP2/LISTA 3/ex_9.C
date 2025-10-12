#include <stdio.h>
#include <string.h>


typedef struct {
   char nome[50];
   int idade;
   int altura;
} Person;



int main() {
    int size = sizeof(Person);

    printf("Tamanho do struct: %d", size);

    return 0;
}
