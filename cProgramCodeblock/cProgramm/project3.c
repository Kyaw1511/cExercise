#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"

// This is for multiplication table

int main()
{
    int num;
    int num2 = 0;
    int ans = 0;

    printf("Please enter a number for multiply _ ");
    scanf("%d", &num);
    while (num2 < 12){
        num2++;
        ans = num * num2;
        printf("%d x %d = %d \n", num, num2, ans);
    }
    printf("Your number %d is %d out of range between 1 to 12th ", num, num2);

    return 0;
}
