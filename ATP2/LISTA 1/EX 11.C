#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int nums[15];
    srand(time(NULL));

        for(int i = 0; i <15; i++){
            nums[i] = (rand()%51);
        }
        int aux = 51;
        for (int z = 0; z<15; z++){
            if (nums[z]<aux){
                aux = nums[z];
            }
        }
        printf("menor numero %d", aux);
return 0;
}
