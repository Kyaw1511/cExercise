#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"

int main()
{
    int base;
    int power;
    int result = 1;
    int i;
    printf("Please enter your base number _ ");
    scanf("%d", &base);
    printf("Please enter your power number _ ");
    scanf("%d", &power);
    for (i = 0; i < power; i++) {
        result *= base;
    }
    printf("\n The result is %d ", result);
    return 0;

}
/*
base = 2;
power = 3;

i = 0; 	=> result = result x base;
	=> result = 1 x (base က 2 power zero ) = 1;
i = 1; 	=> result = 1 x (base is 2 power is 1 so, the result of i value is equal1, the answer is  2) 	= 2;
i = 2;	=> result = 2 x (base is 2 power is 2 so, the result of i value is equl2, the answer is 4)	= 8;

*/
