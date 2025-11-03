#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main (){
FILE *arq;
int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, aux[10];

arq = fopen("text.bin", "wb+");
    fwrite(&array, sizeof(int), 10, arq);
    rewind(arq);
    fread(&aux, sizeof(int), 10, arq);
fclose(arq);

            printf("%d ", aux[2]);
    

return 0;
}
