#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define L 3
#define C 3

int main() {
int matriz[L][C];
srand(time(NULL));


for(int i = 0; i < L; i++){
    for(int j = 0; j < C; j++){
        matriz[i][j] = rand()%101;
    }
}

int menor = matriz[0][0];

for(int i = 0; i < L; i++){
    for(int j = 0; j < C; j++){
        matriz[i][j] = rand()%101;
    }
}

for(int i = 0; i < L; i++){
    for(int j = 0; j < C; j++){
        if(matriz[i][j] < menor)
            menor = matriz[i][j];
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

printf("O menor numero dets matriz eh: %d", menor);


return 0;
}



