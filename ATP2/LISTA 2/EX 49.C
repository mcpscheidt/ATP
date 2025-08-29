#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define L 3
#define C 4

int main() {
int matriz[L][C];
int matriz_2[C][L];
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

for (int i = 0; i < L; i++){
    for (int j = 0; j < C; j++){
        matriz_2[j][i] = matriz[i][j];
    }
}

printf("Matriz A transposta: \n");
for(int i = 0; i < C; i++){
        for(int j = 0; j < L; j++)
        {
            printf("%d  ", matriz_2[i][j]);
        }
        printf("\n");
}


return 0;
}



