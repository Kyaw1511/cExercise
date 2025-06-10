#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include "info.h"

// testing for realloc;
int main()
{

    int *pointer;
    int i;

    pointer = (int *) malloc( 5 * sizeof(int));
    for (i = 0; i < 5; i++) {
        pointer[i] = i * 10;
    }

    for (i = 0; i < 10; i++) {
        printf("%d \n", pointer[i]);
    }

    pointer = realloc (pointer, 10*sizeof(int));
    for (i = 0; i < 10; i++) {
        pointer[i] = i *10;
    }
    printf("\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", pointer[i]);
    }
    free(pointer);

    return 0;
}

