#include <stdio.h>
#include <stdlib.h>

int qtd_maiusculas(char *nums){
    char *ptr = nums;
    int maiusculas = 0;
    for(char *ptr = nums; *ptr != '\0'; ptr++){
        if (*ptr >= 'A' && *ptr <= 'Z'){
            maiusculas++;
        }
}

return maiusculas;
}

int main(){
    char nome[7] = "MAtheus";

    printf("%d", qtd_maiusculas(nome));

return 0;
}




