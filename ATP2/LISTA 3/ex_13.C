#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int salario;
    char departamento[50]; //vendas e projetos

}Funcionario;

int main(){
    Funcionario funcionario1;

    strcpy(funcionario1.nome, "Matheus");
    funcionario1.salario = 10000;
    strcpy(funcionario1.departamento, "vendas");

    printf("Nome: %s\n", funcionario1.nome );

    printf("Departamento: %s\n", funcionario1.departamento );

    printf("Salario: R$%d\n", funcionario1.salario);

    return 0;
}
