#include <stdio.h>
#include <string.h>

typedef struct{

    char nome[50];
    char diretor[50];
    int ano_lancamento;

}Filme;

int main(){
    Filme filme1;

    strcpy(filme1.nome, "Star Wars");

    strcpy(filme1.diretor, "George Lucas");

    filme1.ano_lancamento = 1964;

    printf("Filme: %s\n", filme1.nome);

    printf("Diretor: %s\n", filme1.diretor);

    printf("Ano de lancamento: %d\n", filme1.ano_lancamento);

    return 0;
}
