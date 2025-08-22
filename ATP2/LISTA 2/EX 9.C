#include <stdlib.h>
#include <stdio.h>


#define linhas 3
#define colunas 3

int main() {
int matriz[linhas][colunas] = { {1, 1, 1}, {9, 2, 1}, {1, 1, 1}};
int maior = matriz[0][0];

for( int i = 0; i < linhas; i++)
{
    for(int z = 0 ; z < colunas; z++){
        if(matriz[i][z] > maior){
            maior = matriz[i][z];
        }
    }
}

for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        printf("%d ", matriz[i][j]);
    }

    printf("\n");
}


printf("------------------  \n");

printf("O maior numero desta matriz eh: %d", maior);

return 0;
}

