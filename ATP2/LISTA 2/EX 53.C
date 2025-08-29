#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define L 5
#define C 5

int main() {
int matriz[L][C];
int matriz_2[C][L];
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
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
}
int menor = matriz[0][0];
for (int i = 0; i < L; i++){
    for (int j = 0; j < C; j++){
        if(matriz[i][j] < menor){
            menor = matriz[i][j];
        }
    }
}

int segundo_menor = matriz[0][0];
for (int i = 0; i < L; i++){
    for (int j = 0; j < C; j++){
        if(matriz[i][j] > menor && matriz[i][j] < segundo_menor) {
            segundo_menor = matriz[i][j];
        }
    }
}

printf("\nO menor numero eh: %d\nO segundo menor numero eh: %d\n", menor, segundo_menor);

return 0;
}



