#include <stdio.h>
#include <string.h>

typedef struct{

    char endereco[50];

}Cliente;

int main(){
    Cliente cliente1; Cliente cliente_premium;


    strcpy(cliente1.endereco, "Rua que existe n134 apt 99B");

    cliente_premium = cliente1;


    printf("Endereco do cliente premium: %s\n", cliente_premium.endereco );


    return 0;
}
