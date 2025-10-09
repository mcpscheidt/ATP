#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Livro{
    char titulo[100];
    char autor[100];
    int ano_publicacao;

};

int main(){

struct Livro meulivro;

printf("Digite o titulo do livro ");
    fgets(meulivro.titulo, 100, stdin);

printf("Digite o nome do autor do livro ");
    fgets(meulivro.autor, 100, stdin);

printf("Digite o ano de publicação do livro ");
    scanf("%d", &meulivro.ano_publicacao);

    printf("\n========================\n");
    printf("   LIVRO CADASTRADO\n");
    printf("========================\n");
    printf("Titulo: %s\n", meulivro.titulo);
    printf("Autor: %s\n", meulivro.autor);
    printf("Ano: %d\n", meulivro.ano_publicacao);

return 0;
}


