#include <stdlib.h>
#include <stdio.h>


#define linhas 4
#define colunas 4

int main() {
int matriz[linhas][colunas] = { {1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};
int aux = 1;

for( int i = 0; i < linhas; i++)
{
    for(int z = 0 ; z < colunas; z++){
        if(i != z && matriz[i][z] != 0){
            aux = 0;
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
if(aux == 0){
    printf("matriz nao eh diagonal");
}else printf("matriz  eh diagonal");


return 0;
}

