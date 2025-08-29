#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define L 4
#define C 4

int main() {
int matriz[L][C];
srand(time(NULL));

for(int i = 0; i < L; i++){
    for(int j = 0; j < C; j++){
        matriz[i][j] = rand()%101;
    }
}


printf("Matriz A: \n");
for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
}


float soma =  0;
for (int i = 0; i < L; i++){
    for (int j = 0; j < C; j++){
        if(j > i){
            soma += matriz[i][j];
        }
    }
}

float media = soma/6;

printf("\nA media dos elementos acima da diagonal principal eh: %.1f, a soma eh %.1f", media, soma);

return 0;
}



