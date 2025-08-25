#include <stdlib.h>
#include <stdio.h>


#define L 3
#define C 2

int main() {
int matriz[L][C] = { {1, 1}, {1, 1}, {1, 1}};
int matriz_2[C][L] = { {1, 1, 1}, {1, 1, 1}};
int resultado[C][C];

for(int i = 0; i < C; i++)
        for(int j = 0; j < C; j++)
        {
            resultado[i][j]=0;
            for(int k = 0; k < L; k++)
                resultado[i][j] += matriz[i][k]*matriz_2[k][j];
        }

printf("Matriz A: \n");

for (int i = 0; i < L; i++)
{
    for (int j = 0; j < C; j++)
    {
        printf("%d ", matriz[i][j]);
    }

    printf("\n");
}

printf("Matriz B: \n");

for (int i = 0; i < C; i++)
{
    for (int j = 0; j < L; j++)
    {
        printf("%d ", matriz_2[i][j]);
    }

    printf("\n");
}
printf("Matriz RESULTADO: \n");

for (int i = 0; i < C; i++)
{
    for (int j = 0; j < C; j++)
    {
        printf("%d ", resultado[i][j]);
    }

    printf("\n");
}

return 0;
}



