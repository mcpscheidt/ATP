#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

#define num_strings 3
#define buffer_size 50

int main() {
    char *array[num_strings];
    char buffer[buffer_size];

    for (int i = 0; i < num_strings; i++) {
        fgets(buffer, buffer_size, stdin);
        buffer[strcspn(buffer, "\n")] = '\0';

        array[i] = (char *)malloc(strlen(buffer) + 1);
        strcpy(array[i], buffer);
    }

    for (int i = 0; i < num_strings - 1; i++) {
        for (int j = i + 1; j < num_strings; j++) {
            if (strcmp(array[i], array[j]) > 0) {
                char *temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("\nStrings em ordem alfabética:\n");
    for (int i = 0; i < num_strings; i++) {
        printf("%s\n", array[i]);
         free(array[i]);
    }

    return 0;
}
