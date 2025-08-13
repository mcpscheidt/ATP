#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

int somar_n_naturais(int n){
    if (n ==0 ){
        return 0;
    }

return n + somar_n_naturais(n - 1);
}


int main() {
    int num, resultado;
    scanf("%d", &num);

    resultado = somar_n_naturais(num);

    printf("soma de todos os numeros ate %d eh: %d", num, resultado);
    return 0;
}


