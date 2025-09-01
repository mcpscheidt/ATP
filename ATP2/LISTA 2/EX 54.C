#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define L 4
#define C 4

int main() {
int matriz[L][C];
int num;
int soma = 0;
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
            printf("%3d  ", matriz[i][j]);
        }
        printf("\n");
}

printf("\nSelecione a diagonal em que devera ocorrer a soma dos elementos 1 ou 2?  ");
scanf("%d", &num);

if(num == 1 ){
    for (int i = 0; i < L; i++){
    for (int j = 0; j < C; j++){
        if(i == j){
            soma += matriz[i][j];
        }
    }
}


}else if (num == 2){

for (int i = 0; i < L; i++){
    for (int j = 0; j < C; j++){
        if(i + j == 3 ){
            soma += matriz[i][j];
        }
    }
}
}

printf("\nA soma dos elementos da diagonal %d eh: %d\n", num, soma);

return 0;
}



