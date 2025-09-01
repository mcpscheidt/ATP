
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define LC 2
#define CL 3


int main() {
int matriz[LC][CL]= {{1, 0, 1}, {0, 2, 1}};
int matriz_2[CL][LC]  = {{1, 2}, {3, 0}, {1, 1}};
int resultante[LC][LC];
srand(time(NULL));

//for(int i = 0; i < L; i++){
//    for(int j = 0; j < C; j++){
//        matriz[i][j] = rand()%101;
//    }
//}

printf("Matriz A: \n");
for(int i = 0; i < LC; i++){
        for(int j = 0; j < CL; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
}

printf("Matriz B: \n");
for(int i = 0; i < CL; i++){
        for(int j = 0; j < LC; j++)
        {
            printf("%d ", matriz_2[i][j]);
        }
        printf("\n");
}

int z =0;
for (int i = 0; i < LC; i++) {
        for (int z = 0; z < LC; z++) {
            resultante[i][z] = 0;
            for (int j = 0; j < CL; j++) {
                resultante[i][z] += matriz[i][j] * matriz_2[j][z];
            }
        }
    }

printf("Matriz Resultante: \n");
for(int i = 0; i < LC; i++){
        for(int j = 0; j < LC; j++)
        {
            printf("%d ", resultante[i][j]);
        }
        printf("\n");
}


return 0;
}
