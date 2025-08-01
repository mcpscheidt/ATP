#include <stdio.h>
#include <string.h>


int main(){
    char vetor[8];
    int vogais = 0;

    fgets(vetor, 8, stdin);

        for (int i = 0; i<8; i++){
            if (vetor[i] == 'a' || vetor[i] == 'e' || vetor[i] == 'i' || vetor[i] == 'o' || vetor[i] == 'u'){
                vogais++;
            }
        }
    printf("numero de vogais %d", vogais);

return 0;
}
