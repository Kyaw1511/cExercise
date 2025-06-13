#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include "info.h"

int swap(int *num1, int *num2);
//int swap(int num3, int num4);
int sum (int num3, int num4);
int main()
{

    int i = 10, k = 20;
    int y = 20, z = 400;
    int v = 30, c = 300, total;

    swap(&i, &k);
    printf("i =  %d, k = %d \n\n", i,k);

    total = sum(v, c);
    printf("Total is %d", total);

    //swap(y, z);
    //printf("y = %d, k = %d", y, z);

    return 0;
}
int sum (int num3, int num4)
{
    int total;
    total = num3 + num4;

    return total;
}

int swap(int *num1, int*num2) {
    int temp;
    printf("num1 = %d, num2 = %d\n\n", *num1,*num2);
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    printf("num1 = %d, num2 = %d, temp = %d\n\n", *num1, *num2, temp);

}

/*int swap(int num3, int num4) {
    int temp;
    temp = num3;
    num3 = num4;
    num4 = temp;

}*/
