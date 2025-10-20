#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
FILE *fp, *fr;
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



    while (fgets(buffer, sizeof(buffer), fr) != NULL) {


            count++;

    }

     fclose(fr);

     printf("Numeor de linhas do arquivo %s eh: %d\n", "text.txt", count);
return 0;
}
