#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "info.h"

int main()
{
    int num[5] = {13, 5, 6, 1, 12};
    int i,k,temp;

    for (i = 0; i < 5; i++) {
        for (k = 0; k < 5-1; k++) {
            if(num[k+1] < num[k]) {
                temp = num[k+1];
                num[k+1] = num[k];
                num[k] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++) {
        printf("%d \t", num[i]);
    }
    getch();
    return 0;
}
