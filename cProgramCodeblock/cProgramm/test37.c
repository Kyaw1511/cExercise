#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include "info.h"

int main() {
    FILE * kyawminthein;
    char position2 [100];

    kyawminthein = fopen("tested3.txt", "r+");
    if(kyawminthein == NULL) {
        printf("There is no file \n");
    } else {
        printf("There is a file\n");
    }
    fprintf(kyawminthein, "YANGONN");
    fseek(kyawminthein, 5, SEEK_SET);
    fprintf(kyawminthein, "HELLO_Bangkok");

    fclose(kyawminthein);
}
