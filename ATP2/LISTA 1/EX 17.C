#include <stdio.h>

int* somardez(int *nums){
    int *aux = nums;
    for(int i = 0; i < 5; i++){
        *(aux+i) = *(aux+i) + 10;
    }



return nums;
}



int main(){

    int nums[5] = {1, 2, 3, 4, 5};
        printf("Resultado: ");
        somardez(nums);
            for (int z = 0; z < 5; z++){
                printf("%d ", nums[z]);
            }

return 0;
}
