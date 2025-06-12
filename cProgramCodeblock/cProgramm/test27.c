#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include "info.h"

int main()
{
    char word[100] = "Hello BKK";
    int i = 10;
    {
        strcat(word, " Migalarpar");
        char word[100] = "hello Myanmar";
        strcat(word, " Tea");
        i = 6;
        int i = 200;
        i = 7;
        printf("inside for %s\n", word);
        printf("inside %d\n", i);
    }
    printf("outside for %s\n", word);
    printf("outside %d\n", i);

    return ++i;
}
