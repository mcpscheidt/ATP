#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (){
FILE *arq, *arq_r;
int c, count = 0;
char procurado = 'a';

    arq = fopen("text.txt", "w");
    fprintf(arq, "abcdefgaaaaaaaaaaaaa");
    fclose(arq);

    arq_r = fopen("text.txt", "r");
    while((c = fgetc(arq_r)) != EOF){

        if(c == procurado){
            count++;
        }
    }
    fclose(arq_r);


    printf("A quantidade de letras ' %c ' eh: %d\n", procurado, count);

return 0;
}
