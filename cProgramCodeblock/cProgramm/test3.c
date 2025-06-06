#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"

// if shorten form this is impressive.
int main()
{
    int num;
    printf("Enter your ate apple number \n");
    scanf("%d", &num);
    //printf("Your ate %d apples", num);
    printf("Today I ate %d apple%s ", num, (num > 1) ? "s" : "");

    return 0;
}
