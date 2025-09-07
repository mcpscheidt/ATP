#include <stdio.h>

int main(){
    float nums;
    float soma = 0;
    int i;
    for ( i = 0; i < 6; i++){
        scanf("%f", &nums);
        soma = soma + nums;
    }
    float media = soma/i;
    printf("resposta: %f", media);

return 0;
}
