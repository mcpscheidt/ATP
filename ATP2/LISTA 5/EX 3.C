#include <stdio.h>

int encontrarMaximo(int array[], int tamanho) {
    if (tamanho == 1) {
        return array[0];
    } else {
        int primeiro_elemento = array[0];
        int max_do_resto = encontrarMaximo(array + 1, tamanho - 1);

        if (primeiro_elemento > max_do_resto) {
            return primeiro_elemento;
        } else {
            return max_do_resto;
        }
    }
}

int main() {
    int array[] = {18, 99, 35, 72, 29, 105, 42};
    int tamanho = sizeof(array) / sizeof(array[0]);
    int maximo = encontrarMaximo(array, tamanho);
    
    printf("O maior elemento no array eh: %d\n", maximo);

    return 0;
}
