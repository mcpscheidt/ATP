#include <stdlib.h>
#include <stdio.h>


#define linhas 4
#define colunas 4




int main() {
int matriz[linhas][colunas] = { {1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int soma = 0;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            soma = soma + matriz[i][j];
        }
    }


    printf("Resultado da soma dos elemtos da Matriz: %d", soma);

return 0;
}
