#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define L 5
#define C 5

int main() {
int matriz[L][C];
srand(time(NULL));
for(int i = 0; i < L; i++){
    for(int j = 0; j < C; j++){
        matriz[i][j] = rand()%101;
    }
}

printf("Matriz A: \n");
for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
}
int maior =  matriz[0][0];
for (int i = 0; i < L; i++){
    for (int j = 0; j < C; j++){
        if(matriz[i][j] > maior ){
            maior =  matriz[i][j];
        }
    }
}

int segundo_maior = matriz[0][0];
for (int i = 0; i < L; i++){
    for (int j = 0; j < C; j++){
        if(matriz[i][j] > segundo_maior && matriz[i][j] < maior ){
            segundo_maior =  matriz[i][j];
        }
    }
}

printf("\nO maior numero eh: %d\nO segundo maior numero eh: %d", maior, segundo_maior);

return 0;
}



