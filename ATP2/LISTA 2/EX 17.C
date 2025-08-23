#include <stdlib.h>
#include <stdio.h>

#define linhas 3
#define colunas 3

int main() {
int matriz[linhas][colunas] = { {1, 2, 3}, {4, 0, 6}, {7, 8, 9}};

int num, aux[2];


printf("Matriz A:\n");
for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        printf("%d ", matriz[i][j]);
    }

    printf("\n");
}

printf("Voce quer saber a posicao de qual numero? ");
scanf("%d", &num);

for( int i = 0; i < linhas; i++)
{
    for(int z = 0 ; z < colunas; z++){
    if(matriz[i][z] == num){
        aux[0] = i+1;
        aux[1] = z+1;
    }
    }
}

printf("A coordenada de %d eh (%d, %d)\n", num, aux[0], aux[1]);


return 0;
}

