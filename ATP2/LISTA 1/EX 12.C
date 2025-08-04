#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int nums[12];
    srand(time(NULL));
     printf("Numeros: ");
        for(int i = 0; i <12; i++){
            nums[i] = (rand()%41 - 20);
            printf("%d ", nums[i]);
        }
        int aux;
        for (int z = 0; z<12; z++){
            if (nums[z]<0){
                aux++;
            }
        }
        printf("qtd de negativos %d", aux);
return 0;
}
