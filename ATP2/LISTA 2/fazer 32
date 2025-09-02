
#include <stdlib.h>
#include <stdio.h>

#define DIM 2

int main() {
int matriz[DIM][DIM]= {{1, 0}, {0, -1}};
int matriz_2[DIM][DIM];

printf("Matriz A: \n");
for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
}

int primaria = 1;
int secundaria = 1;
for (int i = 0; i < DIM; i++){
    for (int j = 0; j < DIM; j++){
        if(i == j){
        primaria = primaria*matriz[i][j];
        }else secundaria = secundaria*matriz[i][j];
    }
}
int determinante = primaria - secundaria;

if(determinante != -1){
    printf("A matriz nao eh de reflexao!");
}else printf("A matriz eh de reflexao!");

return 0;
}

