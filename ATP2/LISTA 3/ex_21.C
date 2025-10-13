
#include <stdio.h>
#include <string.h>


typedef struct {
   char nome[50];
   int codigo;
   int price;
} Product;

void imprimir_dados(Product produto){
    printf("------\n");
    printf("Nome: %s\n", produto.nome);
    printf("Codigo: %d\n", produto.codigo);
    printf("Preco: %d\n", produto.price);

}

int main() {
    Product produto1;

    strcpy(produto1.nome, "Lapis"); produto1.codigo = 001; produto1.price = 20;

    int tamanho = sizeof(Product);
    printf("--------O tamanho eh: %d\n--------", tamanho);
    imprimir_dados(produto1);

    return 0;
}
