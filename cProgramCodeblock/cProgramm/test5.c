#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"

int main()
{
    float numberOfTest = 0.0;
    float score = 0.0;
    float average = 0.0;
    float total = 0.0;
    printf("Press o to End \n\n");

    do {
        printf("Test: %.0f \n", numberOfTest);
        printf("Average : %.2f \n", average);
        printf("Enter your score: ");
        scanf("%f", &score);
        numberOfTest++;
        total += score;
        average = total / numberOfTest;
    }
    while (score !=0);
    return 0;
}
