#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
FILE *fp, *fr, *aux, *aux_r;
char buffer[1024];
int count = 0;
    fp = fopen("text.txt", "w");
    fprintf(fp, "Hello, World!");
    fclose(fp);

    fr = fopen("text.txt", "r");
    if (fr == NULL) {
        perror("Erro ao abrir arquivo para leitura");
        return 1;
    }

    aux = fopen("text2.txt", "w");


    while (fgets(buffer, sizeof(buffer), fr) != NULL) {

   fputs(buffer, aux);
    }

     fclose(fr);
     fclose(aux);

    aux_r = fopen("text2.txt", "r");
    while (fgets(buffer, sizeof(buffer), aux_r) != NULL) {
        printf("%s", buffer);
    }
    fclose(aux_r);
return 0;
}
