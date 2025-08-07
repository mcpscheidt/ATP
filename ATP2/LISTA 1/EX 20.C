#include <stdio.h>
#include <string.h>

void inverter_array(char *array){
  char *inicio = array;
  char *fim = array + strlen(array) - 1;
  char aux;
   while (inicio < fim) {

        aux = *inicio;
        *inicio = *fim;
        *fim = aux;

        inicio++;
        fim--;
   }

}



int main(){
    char string[20];
    printf("Digite uma palavra: ");
    fgets(string, 20, stdin);
    printf("Palavra digitada: %s", string);
        inverter_array(string);
    printf("Palavra invertida %s", string);


return 0;
}


