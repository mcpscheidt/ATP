#include <stdio.h>
#include <stdlib.h>


int main(){

    int nums[5] = {1, 2, 3, 4, 5};
    int *ponteiro = nums;


    printf("numeros do array: ");
        for(int i = 0; i<5; i++){
            printf("%d ", *(ponteiro + i));

    }



return 0;
}
