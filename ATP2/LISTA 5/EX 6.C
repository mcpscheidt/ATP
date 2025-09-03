#include <stdlib.h>
#include <stdio.h>

void inverter(int *array, int tamanho);

int main(){
int array[10] = {1 ,2 ,3, 4, 5, 6, 7, 8, 9, 10};

inverter(array, 10);


return 0;
}

void inverter(int *array, int tamanho){
    if(tamanho == 0 ){
        return;
    }else {
        printf("%3d", array[tamanho-1]);
        inverter(array, tamanho-1);
    }
}
