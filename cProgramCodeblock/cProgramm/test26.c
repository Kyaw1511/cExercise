#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include "info.h"

int new1();
int main()
{
    int z;
    z = new1();
    printf("%d", z);
    return 0;
}
int new1() {
    int num = 10;
    return ++num;
}
