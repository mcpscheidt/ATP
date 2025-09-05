
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int somar_digitos(int num);

int main(){
int num1;

printf("Digite um numero: \n");
scanf("%d", &num1);

printf("A soma dos digitos de %d eh %d\n", num1, somar_digitos(num1));

return 0;
}

int somar_digitos(int num){
     if(num % 10 == 0){
        return 0;
     }else return num%10 + somar_digitos(num/10);
}
