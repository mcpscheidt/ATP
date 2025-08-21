#include <stdlib.h>
#include <stdio.h>


#define linhas 3
#define colunas 3


int main() {
int matriz[linhas][colunas] = { {3, 3, 3}, {3, 3, 3}, {3, 3, 3}};
int matriz_secundaria[linhas][colunas] = { {2, 2, 2}, {2, 2, 2}, {2, 2, 2}};
int matriz_resultante[linhas][colunas];

for(int i = 0; i < linhas; i++){
        for(int z = 0;z <colunas; z++){
           matriz_resultante[i][z] = 0;
            for(int j = 0;j<colunas;j++){
                matriz_resultante[i][z] += matriz[i][j] * matriz_secundaria[j][z];
            }
        }
    }

for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz_resultante[i][j]);
        }

        printf("\n");
    }


return 0;
}
