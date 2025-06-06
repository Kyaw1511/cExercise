#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"

int main()
{
    int x = 0;
    int day =1;
    int money = 0;
    while(x <= 10) {
        printf("x is %d\n", x);
        x++;
    }
    printf("x is %d outside of the while loop.", x);
    while (day <= 31) {
        money += 200;
        day++;
        printf("Amount of money: %d\n", money);
    }

    return 0;
}
