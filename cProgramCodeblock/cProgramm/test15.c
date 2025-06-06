#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include "info.h"

int main()
{
    char name[200];
    char name1[100];
    char *pointer = "Kyaw Min Thein";
    pointer = "Kyaw";
    printf("%s \n\n", pointer);

    scanf("%s", name);
    printf("%s\n\n", name);

    gets(name1);
    puts(name1);
    return 0;
}
