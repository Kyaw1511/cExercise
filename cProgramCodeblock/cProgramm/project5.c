#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "info.h"

int main()
{

    char sortingArray [30];
    int a, b,c,d,temp;

    printf("You can type any number not more than 19 words !!! \n\n");

    for (a = 0; a < 30; a++) {
        sortingArray[a] = getch();
        if(sortingArray[a] == 13) {
            break;
        }
        putchar(sortingArray[a]);

        //
        for (c = 0; c <= a; c++) {
            for (d = 0; d < c; d++) {
                if(sortingArray[d+1] < sortingArray[d]) {
                    temp = sortingArray[d+1];
                    sortingArray[d+1] = sortingArray[d];
                    sortingArray[d] = temp;
                }
            }
        }
        for (c = 0; c < a; c++) {
            printf("%d \t", sortingArray[c]);
        }
        getch();
    }
    printf("\n");


    //for (b = 0; b < a; b++) {
        //putchar(sortingArray[b]);
    //}
    //getch();
    return 0;
}
