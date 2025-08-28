#include <stdlib.h>
#include <stdio.h>

#define L 3
#define C 3

int main() {
int matriz[L][C] = {{5, 8, 10}, {2, 5, 8}, {7, 2, 5}, {6, 2, 5}};
int matriz_2[L][C];
int matriz_resultante[L][C];

printf("Matriz A: \n");
for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
}

for (int i = 0; i < L; i++){
    for (int j = 0; j < C; j++){
        matriz_2[j][i] = matriz[i][j];
    }
}

printf("Matriz A transposta: \n");
for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++)
        {
            printf("%d ", matriz_2[i][j]);
        }
        printf("\n");
}


for(int i = 0; i < L; i++){
        for(int z = 0;z <C; z++){
           matriz_resultante[i][z] = 0;
            for(int j = 0;j<C;j++){
                matriz_resultante[i][z] += matriz[i][j] * matriz_2[j][z];
            }
        }
    }

printf("Resultado da multiplicacao: \n");
for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++)
        {
            printf("%d ", matriz_resultante[i][j]);
        }
        printf("\n");
}



return 0;
}



