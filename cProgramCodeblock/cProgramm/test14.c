#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "info.h"

int main()
{
    int num[6] = {22, 11, 44, 66, 8, 9};
    //int num[6] = {1, 3, 5, 7, 9, 2};
    //int num[6] = {2, 3, 4, 7, 8, 9};
    char a;
    char name[199];
    int *pointer;
    int i;
    pointer = num;


    printf("%d\n\n", *pointer);
    for(i = 0; i < 5; i++) {
        printf("%d \t", num[i]);
    }
    printf("\n\n");

    for(i = 0; i < 5; i++){
        printf("%d \t", pointer[i]);
        // array ဆိုရင် * ထည့်ရန် မလိုပါ
    }
    printf("\n\n");

    for(i = 0; i < 5; i++) {
        printf("%d \t", *(pointer+i));
        //address looping
    }
    printf("\n\n");

    for (i = 0; i < 5; i++) {
        printf("%d\t", *pointer);
        pointer++;
    }
    printf("\n\n");

    printf("%d \n", sizeof(name));
    printf("%d", sizeof(num));
    printf("\n\n");

    //scanf("%d", pointer);

    return 0;
}
