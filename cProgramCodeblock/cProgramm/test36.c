#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <conio.h>
#include <string.h>
#include "info.h"

int main() {
    FILE * kmt;
    char position2[100];

    kmt = fopen("test2.txt", "r+");
    if (kmt == NULL) {
        printf("There is no file \n\n");
    } else {
        printf("There is a file\n");
    }

    fscanf(kmt, "%s", position2);
    printf("%s\n", position2);

    fclose(kmt);

    return 0;
}
