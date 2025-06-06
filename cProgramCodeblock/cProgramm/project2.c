#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"

// if function projects

int firNum;
int secNum;
int main()
{
    printf("Enter a first number");
    scanf("%d", &firNum);
    printf("Enter a second number");
    scanf("%d", &secNum);

    if(firNum > secNum) {
        printf("%d is greater than %d \n", firNum, secNum);
        printf("%d is less than %d \n", secNum, firNum);
    }
    if (secNum > firNum) {
        printf("%d is greater than %d \n ", secNum, firNum);
        printf("%d is less than %d \n", firNum, secNum);
    }
    if (firNum % 2 == 0) {
        printf("%d is even number ", firNum);
    }
    else {
        printf("%d is odd number ", firNum);
    }
    return 0;
}

