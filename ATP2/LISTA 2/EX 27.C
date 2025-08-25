#include <stdlib.h>
#include <stdio.h>

#define L 3
#define C 3

int main() {
int matriz[L][C] = {{1,1,1},{1,1,1},{1,1,1},};
int num;

printf("Matriz A: \n");

for (int i = 0; i < L; i++)
{
    for (int j = 0; j < C; j++)
    {
        printf("%d ", matriz[i][j]);
    }

    printf("\n");
}

printf("Escolha um numero para multiplicar a matriz ");
scanf("%d", &num);


for(int i = 0; i < L; i++){
    for(int j = 0; j < C; j++){

            matriz[i][j] = matriz[i][j]*num;

    }
}

printf("Matriz A multiplicada por %d: \n", num);

for (int i = 0; i < L; i++)
{
    for (int j = 0; j < C; j++)
    {
        printf("%d ", matriz[i][j]);
    }

    printf("\n");
}


return 0;
}



