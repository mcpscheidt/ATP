#include <stdlib.h>
#include <stdio.h>


#define linhas 3
#define colunas 3

int main() {
int matriz[linhas][colunas] = { {1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
int matriz_2[linhas][colunas] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

printf("Matriz A:\n");
for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        printf("%d ", matriz[i][j]);
    }

    printf("\n");
}

printf("Matriz B:\n");a
for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        printf("%d ", matriz_2[i][j]);
    }

    printf("\n");
}


for( int i = 0; i < linhas; i++)
{
    for(int z = 0 ; z < colunas; z++){
    matriz_2[i][z] = matriz[i][z];
    }
}

printf("------------------  \nMatriz B modificada:\n");

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

