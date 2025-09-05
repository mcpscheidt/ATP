#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int potencia(int numero, int potencia);

int main(){
int num1;
int pot;


printf("Digite um numero: \n");
scanf("%d", &num1);


printf("Digite a potencia deste numero a ser calculada: \n");
scanf("%d", &pot);


printf("O numero %d elevado a %d eh %d \n", num1, pot, potencia(num1, pot));

return 0;
}

int potencia(int numero, int pot){
    if(pot == 0){
        return 1;
    }else return numero*potencia(numero, pot -1);

}
