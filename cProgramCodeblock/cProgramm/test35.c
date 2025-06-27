#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include "info.h"

int main() {
    FILE * kmt;
    char position[1000];
    char string2[1000];

    kmt = fopen("test1.txt", "a"); //must be r for typing in test1.txt
    if(kmt == NULL) {
        printf("There is no file");
    } else {
        printf("There is a file");
    }
    fprintf(kmt, "Hello World \n");
    fprintf(kmt, "\nTesting1\n\n");

    // testing for fgets
    fgets(position, 1000, kmt);
    printf("\n\n\n%s\n", position);

    fclose(kmt);
}

