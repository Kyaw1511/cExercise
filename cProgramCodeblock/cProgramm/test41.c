#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "info.h"

int main() {

    unsigned int mask = 0x80000000;
    unsigned int masksmall = 0x00000001;
    int i;
    unsigned a;
    unsigned result;
    unsigned resultSmall;

    // for result big;
    result = mask &a;
    printf("Enter a number for a ::");
    scanf("%u", &a);
    if (result != 0) {
        printf("The biggest bit is %u \n\n", result);
    } else {
        for (i=0; i<a; i++) {
            mask = mask >> 1;
            result = mask & a;

            if (result != 0) {
                printf("The biggest bit is %u\n\n", result);
                break;
            }
        }
    }

    // for result small;
    resultSmall = masksmall &a;
    if (resultSmall != 0) {
        printf("The smallest bit is %u\n\n", resultSmall);

    } else {
        for (i=0; i<a; i++) {
            masksmall = masksmall <<1;
            resultSmall = masksmall & a;
            if(resultSmall !=0) {
                printf("The smallest bit is %u\n", resultSmall);
                break;
            }
        }
    }

    return 0;
}


