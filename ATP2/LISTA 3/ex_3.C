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
    Carro carro2;

    strcpy(carro1.marca, "fiat");
    strcpy(carro1.modelo, "argos");
    carro1.ano = 2015;

    carro2 = carro1;

    printf("%d\n", carro2.ano);
    printf("%s\n", carro2.modelo);
    printf("%s\n", carro2.marca);
return 0;
}


