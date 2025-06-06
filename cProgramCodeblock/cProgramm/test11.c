#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "info.h"

int main ()
{
    //int numbers [5] = {11,13, 22, 25, 99, 77};
    //int i;
    int points[5];
    int x;
    int total = 0;

    /*for (i = 0; i < 5; i++) {
        printf("%d \n\n", numbers[i]);
    }
    getch();
    */

    for (x = 1; x <= 5; x++) {
        printf("Enter your exam (%d) points \n", x);
        scanf("%d", &points[x]);
        total += points[x];
    }
    printf("In total %d and in average %.2f", total, (float)total/5);
    getch();
}
