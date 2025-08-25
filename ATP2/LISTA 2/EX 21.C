#include <stdlib.h>
#include <stdio.h>


#define L 3
#define C 3

int main() {
int matriz[L][C] = {{1, 0, 0},{0, 0, 1},{0, 0, 0}};
int linha = 0;
int coluna = 0;
int aux = 0;

for(int i = 0; i < L; i++){
    linha = 0;
    for(int j = 0; j < C; j++){
        if(matriz[i][j] == 1 )
            linha++;
    }
    if(linha != 1){
    aux = 1;
    break;
    }
}

for(int i = 0; i < C; i++){
    coluna = 0;
    for(int j = 0; j < L; j++){
        if(matriz[i][j] == 1 )
            coluna++;
    }
    if(coluna != 1){
    aux = 1;
    break;
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

if(aux == 1){
printf("Nao eh matriz de permutacao");
}else printf("eh matriz de permutacao");




return 0;
}



