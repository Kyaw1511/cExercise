#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"
#include <conio.h>
#include <math.h>

int main()
{

    int i;
    for (i = 0; i < 10; i++) {
        printf("%d \n\n", rand()%9 + 1);
    }
    getch();
    return 0;
}
