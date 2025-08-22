#include <stdlib.h>
#include <stdio.h>


#define linhas 4
#define colunas 4

int main() {
int matriz[linhas][colunas] = { {1, 1, 1, 4}, {9, 2, 1, 5}, {1, 1, 1, 6},{8, 0, 1, 6}};
int menor = matriz[0][0];

for( int i = 0; i < linhas; i++)
{
    for(int z = 0 ; z < colunas; z++){
        if(matriz[i][z] < menor){
            menor = matriz[i][z];
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

printf("O menor numero desta matriz eh: %d", menor);

return 0;
}


