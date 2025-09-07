
#include <stdlib.h>
#include <stdio.h>

#define DIM 4

int main() {
int matriz[DIM][DIM]= {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12, 13}};
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
    for (int z = 0; z < DIM; z++){
        matriz_2[z][DIM -1 -i] = matriz[i][z];
        }
    }

printf("Matriz A rotacionada no sentido horario: \n");
for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++)
        {
            printf("%3d ", matriz_2[i][j]);
        }
        printf("\n");
}
return 0;
}
