#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "info.h"

int main()
{
    char name[30] = "Hello world";
    //char pointer[30];
    char *pointer;
    char simple[30];
    pointer = simple;

    fgets(pointer, 50, stdin);
    //gets(pointer);
    puts(pointer);
    printf("\n%s\n", simple);

    return 0;
}
