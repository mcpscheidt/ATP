#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

#define L 3
#define C 3

int main() {
int matriz[L][C] =  {{1, 2,  4},{1, 3,  9},{1, 4, 160}};
srand(time(NULL));
int count = 0;

int j = 0;
for(int i = 0; i < L; i++){
        if(matriz[i][j+1] == sqrt(matriz[i][j+2]) && matriz[i][j] == 1)
            count ++;
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

if(count == L){
printf("A matriz eh uma matriz de Vandermonde.");
}else printf("A matriz nao eh uma matriz de Vandermonde.");
return 0;
}



