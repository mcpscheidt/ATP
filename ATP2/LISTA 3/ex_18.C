#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{

    char cidade[50];
    char rua[50];
    int numero;

}Endereco;

int main(){
    Endereco endereco1;

    strcpy(endereco1.cidade, "Sao Paulo");
    strcpy(endereco1.rua, "Rua que existe");
    endereco1.numero = 99;

    printf("Cidade: %s\n", endereco1.cidade);

    printf("Rua: %s\n", endereco1.rua);

    printf("Numero: %d\n", endereco1.numero);
    return 0;
}
