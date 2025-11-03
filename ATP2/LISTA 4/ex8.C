#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main (){
FILE *arq_w, *arq_r;
char palavra[30] = "batata", aux[30];

arq_w = fopen("text.bin", "wb");
    fwrite(&palavra, sizeof(palavra), 1, arq_w);
fclose(arq_w);

arq_r = fopen("text.bin", "rb");
    fread(&aux, sizeof(palavra), 1, arq_r);

    printf("%s", aux);
fclose(arq_r);


return 0;
}
