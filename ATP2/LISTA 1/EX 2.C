#include <stdio.h>
#include <string.h>

int main() {
	char string[5] = {'a', 'b', 'c', 'd', 'e'};
        printf("resultados: ");
	for(int i = 0; i < 5; i++) {
		printf("%c\n", string[i]);
	}

	return 0;
}
