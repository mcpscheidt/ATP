
#include <stdlib.h>
#include <stdio.h>

#define DIM 3

int main() {
int matriz[DIM][DIM]= {{1, 2, 3}, {2, 3, 4}, {3, 5, 5}};
int matriz_2[DIM][DIM];
int aux = 0;

printf("Matriz A: \n");
for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
}

for(int i = 0; i < DIM-1; i++){
    for(int j = 1; j < DIM; j++){
        if(matriz[i][j] != matriz[i+1][j-1]){

            aux = 1;
            break;
        }
    }
}

if(aux == 1){
    printf("Nao eh uma matriz de Hankel");
}else printf("Eh uma matriz de Hankel");

return 0;
}

