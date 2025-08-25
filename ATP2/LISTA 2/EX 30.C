#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define L 4
#define C 4

int main() {
int matriz[L][C];
srand(time(NULL));
int num;


for(int i = 0; i < L; i++){
    for(int j = 0; j < C; j++){
        matriz[i][j] = (rand()%10+1);
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

float soma = 0;

for(int i = 0; i < L; i++){
    for(int j = 0; j < C; j++){
        soma += matriz[i][j];
    }
}

float media = soma/(L*C);

printf("A media dos elementos da matriz eh: %.1f\nA soma eh %.0f\n", media, soma);

return 0;
}



