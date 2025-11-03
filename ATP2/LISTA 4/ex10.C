#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main (){
FILE *arq_w, *arq_r, *file_w, file_r;
char palavra[30] = "zika_do pantano", aux[30];
long tamanho_total = sizeof(palavra);
long tamanho_registro = 0;


arq_w = fopen("text.bin", "wb");
    fwrite(&palavra, sizeof(palavra), 1, arq_w);
fclose(arq_w);

file_w = fopen("aux.bin", "wb");
arq_r = fopen("text.bin", "rb");
    fread(&aux, sizeof(palavra), 1, arq_r);
    fwrite(&aux, sizeof(aux), 1, file_w);
fclose(file_w);
fclose(arq_r);

    printf("%s", aux);


return 0;
}
