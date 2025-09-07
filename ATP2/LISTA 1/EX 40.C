#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inverter_array(int *array, int size);

int main() {
    int array[8];
    srand(time(NULL));

    for (int i = 0; i < 8; i++) {
        array[i] = rand() % 100;
    }

    printf("vetor original: ");
    for (int j = 0; j < 8; j++) {
        printf("%d ", array[j]);
    }
    printf("\n");

    inverter_array(array, 8);

    printf("vetor invertido: ");
    for (int k = 0; k < 8; k++) {
        printf("%d ", array[k]);
    }
    printf("\n");

    return 0;
}

void inverter_array(int *array, int size) {
    int inicio = 0;
    int fim = size - 1;
    int temp;

    while (inicio < fim) {
        temp = array[inicio];
        array[inicio] = array[fim];
        array[fim] = temp;

        inicio++;
        fim--;
    }
}
