#include <stdlib.h>
#include <stdio.h>

#define linhas 3
#define colunas 3

int main() {
int matriz[linhas][colunas] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int matriz_2[linhas][colunas];
int aux = linhas-1;
printf("Matriz A:\n");
for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        printf("%d ", matriz[i][j]);
    }

    printf("\n");
}



for( int i = 0; i < linhas; i++)
{
    for(int z = 0 ; z < colunas; z++){
    matriz_2[aux][z] = matriz[i][z];
    }
    aux--;
}

printf("Matriz A com linhas invertidas:\n");
for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        printf("%d ", matriz_2[i][j]);
    }

    printf("\n");
}



return 0;
}

