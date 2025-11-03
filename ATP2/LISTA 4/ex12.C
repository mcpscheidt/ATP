#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main (){
FILE *arq;
int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, aux[12], array2[2] = { 7, 88};

arq = fopen("text.bin", "wb+");
    fwrite(&array, sizeof(int), 10, arq);
    rewind(arq);
    fread(&aux, sizeof(int), 10, arq);
        printf("antes de mexer no arquivo:");
        for(int i = 0; i<10; i++){
            printf("%d ", aux[i]);
        }

        printf("\n");

    fwrite(&array2, sizeof(int), 2, arq);
    rewind(arq);
    fread(&aux, sizeof(int), 12, arq);
    printf("depois de mexer no arquivo:");
        for(int i = 0; i<12; i++){
            printf("%d ", aux[i]);
        }
fclose(arq);



return 0;
}
