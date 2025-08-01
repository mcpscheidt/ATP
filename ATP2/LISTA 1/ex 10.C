#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int nums[10];
    srand(time(NULL));

        for(int i = 0; i <10; i++){
            nums[i] = (rand()%101) + 50;
        }

        for (int z = 0; z<10; z++){
            printf("respota: %d\n", nums[z]);
        }
return 0;
}
