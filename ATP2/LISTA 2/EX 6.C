#include <stdlib.h>
#include <stdio.h>


#define linhas 5
#define colunas 5

int main() {
int matriz[linhas][colunas] = { {6, 2, 3, 4, 5}, {1, 6, 3, 4, 5}, {1, 2, 6, 4, 5}, {1, 2, 3, 6, 5}, {1, 2, 3, 4, 6}};
int soma = 0;
int z =0;

    for(int i = 0; i < linhas; i++, z++){
        soma += matriz[i][z];
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

printf("A soma dos elemtos da diagonal eh: %d", soma);

return 0;
}
