#include <stdlib.h>
#include <stdio.h>

#define L 4
#define C 4

int main() {
int matriz[L][C] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
int z =0;
int array[L*C];
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

printf("Qual numero deveremos buscar? ");
scanf("%d", &num);

for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++)
        {
            array[z] = matriz[i][j];
            z++;
        }
}



int temp = 0;




int inicio = 0;
int fim = z -1;
int aux = 0;

while (inicio <= fim){
        int meio = (inicio + fim)/2;

        if(array[meio] == num){
            aux = meio;
            break;
        }else if(num < array[meio]){
            fim = meio - 1;
        }else inicio = meio +1;
}

int linha = (aux/C)+1;
int coluna = (aux%C)+1;

 printf("A coordenada do elemento eh:\nLinha: %d\nCOluna: %d\n", linha, coluna);

return 0;
}




