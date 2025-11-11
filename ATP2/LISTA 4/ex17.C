#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (){
FILE *arq;
char aux;
int total = 0;

arq = fopen("text.txt", "w+");

    fprintf(arq, "1111111111");
    rewind(arq);

    while((aux = fgetc(arq)) != EOF){
      if (aux >= '0' && aux <= '9')

      total += aux - 48;
    }

fclose(arq);

    printf("A soma de todos os numeros eh: %d\n", total);
return 0;
}

