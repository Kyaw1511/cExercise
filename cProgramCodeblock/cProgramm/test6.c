#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"

int main()
{
    int i;
    for (i = 0; i <= 10; i++){
        printf("i is %d \n", i);
    }
    printf("i is %d outside of the for loop \n", i);

    return 0;
}
