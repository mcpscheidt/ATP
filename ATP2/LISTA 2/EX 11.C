#include <stdlib.h>
#include <stdio.h>


#define linhas 4
#define colunas 4

int main() {
int matriz[linhas][colunas] = { {1, 1, 1, 4}, {9, 2, 1, 5}, {1, 1, 1, 6},{8, 1, 1, 6}};
int count = 0;

for( int i = 0; i < linhas; i++)
{
    for(int z = 0 ; z < colunas; z++){
        if(matriz[i][z]%2 == 0){
            count++;
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

printf("O numero de numeros pares eh: %d", count);

return 0;
}

