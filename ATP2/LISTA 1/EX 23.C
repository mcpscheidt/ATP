#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int num) {
    if (num < 0) {
        return false;
    }

    int reverso = 0;
    int original = num;

    while (num != 0) {
        int digito = num % 10;
        reverso = reverso * 10 + digito;
        num = num / 10;
    }

    if (reverso == original) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;

    printf("digite um numero: ");
    scanf("%d", &num);

    bool teste = is_palindrome(num);

    if (teste == true) {
        printf("eh palindromo\n");
    } else {
        printf("nao eh palindromo\n");
    }

    return 0;
}


