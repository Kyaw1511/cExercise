k#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "info.h"

// testing for git repo to upload && testing any errors
// before the error has occurred and I already solve the problem


int main()
{
    char *pointer;

    pointer = (char *) malloc(30);
    gets(pointer);
    puts(pointer);
    scanf("%s", pointer);
    printf("%s\n\n", pointer);
    free(pointer);

    // not working
    /*gets(pointer);
    puts(pointer);
    scanf("%s", pointer);
    printf("%s\n\n", pointer);
    */

    return 0;
}
