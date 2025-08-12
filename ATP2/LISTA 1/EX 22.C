#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


void cont_par_impar(int *array, int tamanho, int*par, int*impar){

    for(int i = 0; i < tamanho; i++){
        if (array[i]%2 ==0){
            (*par)++;
        }else (*impar)++;
    }
}

int main(){
    int par=0, impar=0, array_size;
    printf("Quantos numeros serao analizados? ");
    scanf("%d", &array_size);
    srand(time(NULL));
    int array[array_size];

        for (int i = 0; i < array_size; i++){
            array[i] = rand()%100;
        }
    cont_par_impar(array, array_size, &par, &impar);

    printf("Numeros gerados: ");
        for (int b = 0; b < array_size; b++){
            printf("%d ", array[b]);
        }
    printf("\nQuantidade de impares: %d\nQuantidade de pares: %d\n", impar, par);

return 0;
}


