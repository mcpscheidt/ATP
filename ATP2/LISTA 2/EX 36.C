#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define L 5
#define C 5

int main() {
int matriz[L][C];
srand(time(NULL));
int menor = 0;
int aux = 0;
for(int i = 0; i < L; i++){
    for(int j = 0; j < C; j++){
        matriz[i][j] = rand()%101;
    }
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

int j = 0;


for (int j = 0; j < C; j++) {
        for (int pass = 0; pass < L - 1; pass++) {
            for (int i = 1; i < L; i++) {
                if (matriz[i][j] < matriz[i - 1][j]) {
                    menor = matriz[i][j];
                    matriz[i][j] = matriz[i - 1][j];
                    matriz[i - 1][j] = menor;
                }
            }
        }
    }

printf("Matriz A em ordem: \n");

for (int i = 0; i < L; i++)
{
    for (int j = 0; j < C; j++)
    {
        printf("%d ", matriz[i][j]);
    }

    printf("\n");
}



return 0;
}



