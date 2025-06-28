#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include "info.h"

int main() {
    unsigned int a;
    unsigned int b;
    unsigned int result;

    printf("Please type a number ::: ");
    scanf("%u", &a);
    printf("Please type another number ::: ");
    scanf("%u", &b);
    result = a&b;
    printf("The result is %u", result);

    return 0;

}
