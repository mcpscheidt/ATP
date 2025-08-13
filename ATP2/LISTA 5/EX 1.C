#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

int fatorial(int n){

    if (n == 0) {
        return 1;
    }else
    return n * fatorial(n - 1);
}


int main() {
    int num, resultado;
    scanf("%d", &num);

    resultado = fatorial(num);

    printf("fatorial de %d eh: %d", num, resultado);
    return 0;
}


