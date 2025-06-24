#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include "info.h"

int main(){
    FILE * kyawMinThein;
    kyawMinThein = fopen("file.txt", "w");

    if(kyawMinThein == NULL) {
        printf("There is no file");

    } else {
        printf("There is a file.");
    }
    fprintf(kyawMinThein, "Hello guys");
    fprintf(kyawMinThein, "\n\n");
    fprintf(kyawMinThein, "This is a testing ....");
    fprintf(kyawMinThein, "\n\n");
    fprintf(kyawMinThein, "This is writing testing \n\n");

    fputs("name >> kyawMinThein", kyawMinThein);

    fclose(kyawMinThein);

    return 0;
}
