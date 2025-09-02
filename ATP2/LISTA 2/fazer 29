
#include <stdlib.h>
#include <stdio.h>

#define DIM 3

int main() {
int matriz[DIM][DIM]= {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int matriz_2[DIM][DIM];

printf("Matriz A: \n");
for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
}

for (int i = 0; i < DIM; i++){
    for (int j = 0; j < DIM; j++){
        matriz_2[DIM - 1 -j][i] = matriz[i][j];
        }
    }

printf("Matriz A rotacionada 90 graus no sentido anti-horario: \n");
for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++)
        {
            printf("%3d ", matriz_2[i][j]);
        }
        printf("\n");
}
return 0;
}

