#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
    char endereco[50]; 

}Cliente;

int main(){
    Cliente cliente1;

    strcpy(cliente1.nome, "Matheus");
    cliente1.idade = 35;
    strcpy(cliente1.endereco, "Rua que existe n134 apt 99B");

    printf("Nome: %s\n", cliente1.nome );

    printf("Endereco: %s\n", cliente1.endereco );

    printf("Idade: %d\n", cliente1.idade);

    return 0;
}
