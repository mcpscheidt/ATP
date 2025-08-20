#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

#define NUM_STRINGS 3
#define BUFFER_SIZE 256

int main() {
    char *array[NUM_STRINGS];
    char buffer[BUFFER_SIZE];

    for (int i = 0; i < NUM_STRINGS; i++) {
        fgets(buffer, BUFFER_SIZE, stdin);
        buffer[strcspn(buffer, "\n")] = '\0';

        array[i] = (char *)malloc(strlen(buffer) + 1);
        strcpy(array[i], buffer);
    }

    for (int i = 0; i < NUM_STRINGS - 1; i++) {
        for (int j = i + 1; j < NUM_STRINGS; j++) {
            if (strcmp(array[i], array[j]) > 0) {
                char *temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\nStrings em ordem alfabética:\n");
    for (int i = 0; i < NUM_STRINGS; i++) {
        printf("%s\n", array[i]);
         free(array[i]);
    }

    return 0;
}
