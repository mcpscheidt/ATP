#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
FILE *fp, *fr;
char buffer[1024];

    fp = fopen("text.txt", "w");
    fprintf(fp, "Hello, World!");
    fclose(fp);

    fr = fopen("text.txt", "r");
    if (fr == NULL) {
        perror("Erro ao abrir arquivo para leitura");
        return 1;
    }

    printf("Conteúdo do arquivo '%s':\n", "text.txt");

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {

        printf("%s", buffer);
    }

     fclose(fr);
return 0;
}
