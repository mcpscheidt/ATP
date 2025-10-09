#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRING_SIZE 100

typedef struct {
    char marca[STRING_SIZE];
    char modelo[STRING_SIZE];
    int ano;
}Carro;

int main(){
    Carro carro1;

printf("Digite a marca do carro ");
    fgets(carro1.marca, STRING_SIZE, stdin);

printf("Digite o modelo do carro ");
    fgets(carro1.modelo, STRING_SIZE, stdin);

printf("Digite o ano do carro ");
    scanf("%d", &carro1.ano);

    printf("\n========================\n");
    printf("   Carro CADASTRADO\n");
    printf("========================\n");
    printf("Marca: %s\n", carro1.marca);
    printf("Modelo: %s\n", carro1.modelo);
    printf("Ano: %d\n", carro1.ano);
return 0;
}


