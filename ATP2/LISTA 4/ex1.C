#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
FILE *fp;

    fp = fopen("text.txt", "w");
    fprintf(fp, "Hello, World!");
    fclose(fp);


return 0;
}

