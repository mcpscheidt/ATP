#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#define string_size 20
#define array_size 5
#define buffer_size 50


int main(){

char *array[array_size];
char string[buffer_size];

    for(int i = 0; i < array_size; i++){

        fgets(string, buffer_size, stdin);
        array[i] = malloc(strlen(string));
            for (int z = 0; z < strlen(string); z++){
                if (string[z] == '\n')
                    string[z] = '\0';
            }
        strcpy(array[i], string);
    }

    printf("%s %s %s %s %s", array[0], array[1], array[2], array[3], array[4]);

    for (int i = 0; i < array_size; i++){
        free(array[i]);
    }

return 0;
}
