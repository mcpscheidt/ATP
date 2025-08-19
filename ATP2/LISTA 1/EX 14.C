#include <stdio.h>
#include <stdlib.h>

int *mudar_valor(int *nums){
    int *ptr = nums;
    for(int i = 0; i < 5; i++){
       *(ptr + i) = 0;
    }



return  nums;
}

int main(){
    int nums[5] = {1, 2, 3, 4, 5};
    printf("resultado ");
    for(int z = 0; z<5; z++){
        printf("%d", *mudar_valor(nums));
    }

return 0;
}




