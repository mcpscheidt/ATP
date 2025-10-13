#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{

    char marca[50];
    char modelo[50];
    int ano;

}Carro;

int main(){
    Carro carro1;

    strcpy(carro1.marca, "Fiat");

    strcpy(carro1.modelo, "Argo");

    carro1.ano = 2015;

    printf("Marca: %s\n", carro1.marca);
    printf("Modelo: %s\n", carro1.modelo);
    printf("Ano: %d\n", carro1.ano);


    return 0;
}
