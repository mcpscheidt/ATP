#include <stdlib.h>
#include <stdio.h>


#define linhas 3
#define colunas 3




int main() {
int matriz[linhas][colunas] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }




return 0;
}
