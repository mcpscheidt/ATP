#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define L 3
#define C 3

int main() {
int matriz[L][C] = {{1,9,5},{3,7,8},{10,4,2}};
int menor;

printf("Matriz A: \n");

for (int i = 0; i < L; i++)
{
    for (int j = 0; j < C; j++)
    {
        printf("%d ", matriz[i][j]);
    }

    printf("\n");
}

int determinante = ((matriz[0][0] * matriz[1][1] * matriz[2][2]) +
           (matriz[0][1] * matriz[1][2] * matriz[2][0]) +
           (matriz[1][0] * matriz[2][1] * matriz[0][2]) -
           (matriz[0][2] * matriz[1][1] * matriz[2][0]) -
           (matriz[1][2] * matriz[2][1] * matriz[0][0]) -
           (matriz[0][1] * matriz[1][0] * matriz[2][2]));

printf("A determinante da matriz eh: %d", determinante);

return 0;
}



