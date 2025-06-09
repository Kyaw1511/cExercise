#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "info.h"

int main()
{
    int *pointer;
    int i, total = 0, num;
    float average;

    printf("How many numbers do you want to enter? \n\n");
    scanf("%d", &num);
    // pick up from memory size;
    pointer = (int *) malloc(num*sizeof(int));
    printf("Enter them \n\n");
    for (i = 0; i < num; i++) {
        scanf("%d", &pointer[i]); // & for value;
        total += pointer[i];

    }
    average = (float)total / (float)num;
    printf("\nThe average is %.2f", average);

    return 0;
}
