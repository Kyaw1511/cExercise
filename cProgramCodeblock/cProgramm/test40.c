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
    unsigned int orResult;
    unsigned int xorResult;

    printf("Please type a number ::: ");
    scanf("%u", &a);
    printf("Please type another number ::: ");
    scanf("%u", &b);
    result = a&b;
    orResult = a|b;
    xorResult = a^b;
    // and operator
    printf("The result AND operator is %u\n\n", result);

    // or operator
    printf("The result OR operator is %u\n\n", orResult);

    //xor operator
    printf("The result xor operator is %u", xorResult);
    return 0;

}
