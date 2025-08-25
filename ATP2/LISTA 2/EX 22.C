#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define L 4
#define C 4

int main() {
int matriz[L][C];
srand(time(NULL));
int menor;

for(int i = 0; i < L; i++){
    for(int j = 0; j < C; j++){
        matriz[i][j] = rand()%101;
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


for(int i = 0; i < L; i++){
    for(int b = 0; b < C;  b++){
    for(int j = 1; j < C; j++){
            if(matriz[i][j] < matriz[i][j-1]){
                menor = matriz[i][j];
                matriz[i][j] = matriz[i][j-1];
                matriz[i][j-1] = menor;
            }
    }
    }
}
printf("Matriz A em ordem: \n");

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



