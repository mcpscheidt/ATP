#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main (){
FILE *arq_w, *arq_r;
char palavra[30] = "batata", aux[30];
long tamanho_total = sizeof(palavra);
long tamanho_registro = 0;


arq_w = fopen("text.bin", "wb");
    fwrite(&palavra, sizeof(palavra), 1, arq_w);
fclose(arq_w);

arq_r = fopen("text.bin", "rb");
    fseek(arq_r, 0, SEEK_END);
    tamanho_registro = ftell(arq_r);
fclose(arq_r);

    int qtd_registros = tamanho_total / tamanho_registro;
    printf("qtd eh: %d", qtd_registros);


return 0;
}
