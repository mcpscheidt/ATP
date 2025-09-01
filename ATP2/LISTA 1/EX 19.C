#include <stdio.h>
#define array_size 8

float media_elementos(int *nums){
    float  soma = 0;
    for(int i = 0; i < array_size; i++){
        soma  += *(nums+i);
    }

    float media = soma/array_size;


return media;
}



int main(){

    int nums[array_size] = {1, 2, 3, 4, 86, 6, 7, 8};
        printf("Resultado: %f", media_elementos(nums));


return 0;
}


