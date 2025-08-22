
#include <stdlib.h>
#include <stdio.h>


#define linhas 3
#define colunas 3

int main() {
int matriz[linhas][colunas] = { {1, 1, 1}, {4, 2, 1}, {1, 1, 1}};
int check = 1;

for(int i = 0; i < colunas; i++){
    for(int z = 0;z <linhas; z++){
       if(matriz[i][z] != matriz[z][i]){
        check = 0;
       }
    }
    if (check == 0){
        break;
    }
}
for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }


if(check == 0){
    printf("nao eh simetrica\n");
}else printf("eh simetrica\n");


return 0;
}
