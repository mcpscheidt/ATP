#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

long long fibonacci(int n);

int main() {
    int termo;
    long long resultado;
    scanf("%d", &termo);

    resultado = fibonacci(termo);
    printf("O termo %d da sequencia de Fibonacci eh: %lld\n", termo, resultado);


    return 0;
}

long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

