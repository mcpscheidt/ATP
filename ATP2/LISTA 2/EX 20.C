#include <stdlib.h>
#include <stdio.h>


#define L 4
#define C 3

int main() {
int matriz[L][C] = { {1, 2, 3}, {1, 2, 3}, {1, 2, 3},{1, 2, 3}};
int soma[C] = {0};


for(int i = 0; i < C; i++){
    for(int j = 0; j < L; j++){
        soma[i] += matriz[j][i];
    }
}


printf("Matriz A: \n");

for (int i = 0; i < L; i++)
{
    for (int j = 0; j < C; j++)
    {
        printf("%d ", matriz[i][j]);
    }

    printf("\n");
}


printf("O resultado da soma dos elementos das colunas eh:\nColuna 1: %d\nColuna 2: %d\nColuna 3: %d\n", soma[0], soma[1], soma[2]);



return 0;
}



