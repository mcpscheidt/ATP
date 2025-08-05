#include <stdio.h>
#include <stdlib.h>

int somar_numeros(int *nums){
    int *ptr = nums;
    int soma = 0;

    for(int i = 0; i < 7; i++){
        soma = soma + *(ptr + i);
}



return  soma;
}

int main(){
    int nums[7] = {1, 2, 3, 4, 5, 6, 7};

    printf("%d", somar_numeros(nums));

return 0;
}




