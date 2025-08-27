#include <stdlib.h>
#include <stdio.h>


#define L 3
#define C 3


int main() {
int matriz[L][C] = {{1, 0, 2}, {0, 3, 1},{9, 4, 1} };
int matriz_2[L][C] = {{1, 0, 2}, {0, 3, 1},{9, 0, 1} };
int aux = 0;

printf("Matriz A: \n");
for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
}

printf("\nMatriz B: \n");
for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++)
        {
            printf("%d ", matriz_2[i][j]);
        }
        printf("\n");
}

for (int i = 0; i < L; i++){
    for (int z = 0; z < C; z++){
        if(matriz[i][z] != matriz_2[i][z]){
            aux = 1;
            break;
        }
    }
}
if(aux == 1){
printf("\nas matrizes nao sao iguais!\n");
}else printf("\nas matrizes sao iguais!\n");


return 0;
}



