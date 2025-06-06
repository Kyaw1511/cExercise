#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "info.h"

int main()
{

    char name[40];
    char *pointer;

    gets(name);
    puts(name);

    pointer = name;
    printf("\n\n%s\n", pointer);

    return 0;
}
