
#include <stdlib.h>
#include <stdio.h>

#define DIM 3


int main() {
int matriz[DIM][DIM]= {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
int soma = 0;

printf("Matriz A: \n");
for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
}

for(int i = 0; i < DIM; i++){
    for(int j = 0; j < DIM; j++){
        soma += matriz[i][j];
    }
}

int media = soma/DIM;

printf("\nA media dos elementos da matriz eh: %d\n", media);

return 0;
}
