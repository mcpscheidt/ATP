#include <stdlib.h>
#include <stdio.h>

#define L 4
#define C 4

int main() {
int matriz[L][C] = {{5, 8, 10}, {2, 5, 8}, {7, 2, 5}, {6, 2, 5}};
int soma = 0;

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
        if(i > j){
            soma += matriz[i][j];
        }
        }
    }

printf("\nResultado: %d", soma);

return 0;
}



