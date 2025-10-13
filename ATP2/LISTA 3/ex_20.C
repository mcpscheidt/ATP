#include <stdio.h>

typedef struct {
    char titulo[100];
    char autor[100];
    int ano_publicacao;
} Livro;

int main() {
    Livro estante[3] = {
        {"O Guia do Mochileiro das Galaxias", "Douglas Adams", 1979},
        {"1984", "George Orwell", 1949},
        {"Duna", "Frank Herbert", 1965}
    };

    for (int i = 0; i < 3; i++) {
        printf("--- Livro %d ---\n", i + 1);
        printf("Titulo: %s\n", estante[i].titulo);
        printf("Autor: %s\n", estante[i].autor);
        printf("Ano de Publicacao: %d\n", estante[i].ano_publicacao);
        printf("\n");
    }

    return 0;
}
