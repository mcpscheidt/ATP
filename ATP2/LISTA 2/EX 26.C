#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define L 3
#define C 3

int main() {
int matriz[L][C];
srand(time(NULL));
int count = 0;


for(int i = 0; i < L; i++){
    for(int j = 0; j < C; j++){
        matriz[i][j] = rand()%2;
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
    for(int j = 0; j < C; j++){
        if(matriz[i][j] == 0){
            count++;
        }
    }
}

if(count <= (L*C)/2){
        printf("A matriz nao eh esparsa");
}else printf("A matriz eh esparsa");


return 0;
}



