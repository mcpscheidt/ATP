#include <stdlib.h>
#include <stdio.h>

#define L 5
#define C 5

int main() {
int matriz[L][C] = {{1, 6, 11, 16, 21}, {2, 7, 12, 17, 22}, {3, 8, 13, 18, 23}, {4, 9, 14, 19, 24}, {5, 10, 15, 20, 25}};
int matriz_2[L][C];


printf("Matriz A: \n");
for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
}

int j = C -1;
for (int i = 0; i < C; i++){
    for (int z = 0; z < L; z++){
        matriz_2[z][L -1 -i] = matriz[i][z];
        }
    }


printf("Matriz A rotacionada no sentido horario: \n");
for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++)
        {
            printf("%d ", matriz_2[i][j]);
        }
        printf("\n");
}
return 0;
}



