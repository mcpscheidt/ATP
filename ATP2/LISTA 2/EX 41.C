#include <stdlib.h>
#include <stdio.h>

#define L 3
#define C 3

int main() {
int matriz[L][C] = {{5, 8, 9}, {2, 5, 8}, {7, 2, 5}};
int aux = 0;



printf("Matriz A: \n");
for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
}

for (int i = 1; i < L; i++){
    for (int z = 1; z < C; z++){
        if(matriz[i][z] != matriz[i-1][z-1]){
            aux = 1;
            break;
        }
        }
    }


if(aux == 1 ){
    printf(" num Eh matriz de toeplitz");
}else printf("Eh matriz de toeplitz");

return 0;
}



