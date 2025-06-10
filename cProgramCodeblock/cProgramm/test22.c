#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "info.h"

int main()
{
    int *pointer;
    int z;

    pointer = (int *) malloc( 6 * sizeof(int));
    for (z = 0; z < 6; z++) {
        pointer[z] = z * 3;
    }

    for ( z = 0; z < 10; z++) {
        printf("%d \n\n", pointer[z]);
    }

    pointer = realloc (pointer, 14*sizeof(int));
    for (z = 0; z < 14; z++) {
        pointer[z] = z*2;
    }
    printf("\n");
    for ( z = 0; z < 14; z++) {
        printf("%d \n", pointer[z]);
    }
    free(pointer);

    return 0;
}
