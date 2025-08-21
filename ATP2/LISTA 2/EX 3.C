#include <stdlib.h>
#include <stdio.h>
#include<stdbool.h>

#define linhas 2
#define colunas 2

bool verificar_igualdade(int matriz[linhas][colunas],int matriz_secundaria[linhas][colunas]){

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if(matriz[i][j] != matriz_secundaria[i][j]){
                return false;
            }
        }
    }
return true;
}



int main() {
int matriz[linhas][colunas] = { {1, 1}, {1, 1}, {1, 1}};
int matriz_secundaria[linhas][colunas] = { {1, 2}, {1, 2}, {1, 1}};

    if(verificar_igualdade(matriz, matriz_secundaria) == false){
      printf("As matrizes sao diferentes");
    }else printf("As matrizes sao iguais");



return 0;
}
