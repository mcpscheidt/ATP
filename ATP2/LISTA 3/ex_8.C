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
    Product produto1; Product produto2; Product produto3; Product produto4; Product produto5;

    strcpy(produto1.nome, "Lapis"); produto1.codigo = 001; produto1.price = 20;
    strcpy(produto2.nome, "Caneta"); produto2.codigo = 002; produto2.price = 10;
    strcpy(produto3.nome, "Borracha"); produto3.codigo = 003; produto3.price = 30;
    strcpy(produto4.nome, "Apontador"); produto4.codigo = 004; produto4.price = 40;
    strcpy(produto5.nome, "Caderno"); produto5.codigo = 005; produto5.price = 50;

    imprimir_dados(produto1);
    imprimir_dados(produto2);
    imprimir_dados(produto3);
    imprimir_dados(produto4);
    imprimir_dados(produto5);
    return 0;
}
