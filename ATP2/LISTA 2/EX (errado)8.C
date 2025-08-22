
#include <stdlib.h>
#include <stdio.h>


#define linhas 3
#define colunas 3

int main() {
int matriz[linhas][colunas] = { {1, 1, 1}, {4, 2, 1}, {1, 1, 1}};
int matriz_secundaria[linhas][colunas];

for( int i = 0; i < colunas; i++){
    for(int z = 0 ; z < linhas; z++){
       matriz_secundaria[i][z] = matriz[z][i];

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


for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz_secundaria[i][j]);
        }

        printf("\n");
    }



return 0;
}

