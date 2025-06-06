#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"
#include <conio.h>
#include <math.h>

int main()
{
    float num1 = 10.756;
    float num2 = 5.2;

    printf("num1 is %.1f \n\n", ceil(num1));
    printf("num2 is %.1f \n\n", ceil(num2));

    printf("num1is %.1f\n\n", floor(num1));
    printf("num2 is %.1f\n\n", floor(num2));

    int age = abs(1996-2025);
    printf("I am %d\n\n", age);

    int power = pow(29, 4);
    printf("29 power 4 is %d\n\n", power);

    int square = sqrt(144);
    printf("square root of 144 is %d", square);
    return 0;
}
