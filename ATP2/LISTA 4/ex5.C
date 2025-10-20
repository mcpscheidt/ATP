#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
FILE *arq, *arq_r, *arq2, *arq2_r, *arq3, *arq3_r;
char buffer[1024];
char buffer2[1024];
char concatenado[1024];

    arq = fopen("texto_concatenado.txt", "w");

    //------------------
    arq2 = fopen("text.txt", "w");
    fprintf(arq2, "Hello, World!");
    fclose(arq2);

    arq2_r = fopen("text.txt", "r");
    if (arq2_r == NULL) {
        perror("Erro ao abrir arquivo para leitura");
        return 1;
    }
    //------------------

    arq3 = fopen("text2.txt", "w");
    fprintf(arq3, "My name is Matheus");
    fclose(arq3);

    arq3_r = fopen("text2.txt", "r");
    //------------------

    while(fgets(buffer, sizeof(buffer), arq2_r) != NULL){
        fputs(buffer, arq);
    }


    while(fgets(buffer2, sizeof(buffer2), arq3_r) != NULL){
        fputs(buffer2, arq);
    }
    fclose(arq);

    arq_r = fopen("texto_concatenado.txt", "r");

     while(fgets(concatenado, sizeof(buffer), arq_r) != NULL){
        printf("o texto concatenado eh: %s", concatenado);
    }

    fclose(arq2_r);
    fclose(arq3_r);
    fclose(arq_r);
return 0;
}
