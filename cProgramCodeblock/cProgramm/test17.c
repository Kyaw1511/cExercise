#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include "info.h"

int main()
{
    int num1 = 3;
    int num2;
    int *pointer;

    pointer = &num1;
    printf("%d\n", *pointer);

    num1 = 5;
    num2 = *pointer;
    printf("%d\n", num2);

    pointer = &num2;
    num2 = 10;
    printf("%d\n", *pointer);

    pointer = &num1;
    printf("%d\n", *pointer);


    return 0;
}
