#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define linha_1 2
#define CL 3
#define coluna_2 4

//2x3 vezes 3x4 = 2x4



int main() {
int matriz[linha_1][CL] = {{1, 0, 2}, {0, 3, 1}};
int matriz_2[CL][coluna_2] = {{1, 1, 0, 2}, {2, 0, 1, 1}, {0, 3, 2, 0}};
int resultante[2][4];


//for(int i = 0; i < L; i++){
//    for(int j = 0; j < C; j++){
//        matriz[i][j] = rand()%101;
//    }
//}

printf("Matriz A: \n");
for(int i = 0; i < linha_1; i++){
        for(int j = 0; j < CL; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
}

printf("\nMatriz B: \n");
for(int i = 0; i < CL; i++){
        for(int j = 0; j < coluna_2; j++)
        {
            printf("%d ", matriz_2[i][j]);
        }
        printf("\n");
}

for (int i = 0; i < linha_1; i++){
    for (int z = 0; z <coluna_2; z++){
        resultante[i][z] = 0;
        for (int j = 0; j < CL; j++)
        {
            resultante[i][z] += matriz[i][j] * matriz_2[j][z];
        }
    }
}

printf("matriz resultante da multiplicacao: \n");
for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++)
        {
            printf("%d ", resultante[i][j]);
        }
        printf("\n");
}

return 0;
}



