#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include "info.h"

int main()
{
    char *pointer;

    pointer = (char *) malloc(20);
    gets(pointer);
    puts(pointer);
    scanf("%s", pointer);
    printf("%s\n\n", pointer);

    return 0;
}
