#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int *encontrar_valores(int *array){
    int* resultado = malloc(2 * sizeof(int));
    int menor = array[0];
    int maior = array[0];
        for (int i = 1; i<10; i++){
            if(array[i]>=maior){
                maior = array[i];
            }else if (array[i] < menor)
                    menor = array[i];
        }

    resultado[0] = menor;
    resultado[1] = maior;
return resultado;
}




int main(){
    int array[10] = {1, 3, 2, 8, 5, 9, 0, 19, 10, 69};

    int* valores_finais = encontrar_valores(array);
     printf("Menor numero: %d\nMaior numero: %d\n", valores_finais[0], valores_finais[1]);

return 0;
}


