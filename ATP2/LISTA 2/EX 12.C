#include <stdlib.h>
#include <stdio.h>


#define linhas 2
#define colunas 4

int main() {
int matriz[linhas][colunas] = { {1, 1, 1, 1}, {1, 1, 1, 1}};
int soma = 0;

for( int i = 0; i < linhas; i++)
{
    for(int z = 0 ; z < colunas; z++){
        soma += matriz[i][z];

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
int media = soma/(linhas*colunas);

printf("------------------  \n");

printf("A media dos elementos eh: %d", media);

return 0;
}

