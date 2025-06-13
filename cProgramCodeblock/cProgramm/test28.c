#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include "info.h"
int number = 200;
//struct num = 300;
char name[30] = "Kyaw Min Thein";
void new1();
int main()
{

    int num = 100;
    printf("%d", number);
    printf("\n%s", name);
    new1();
    return 0;
}
void new1()
{
    printf("\n%d", number);
    //printf("\n%d", num);
    //printf("\n%s", name);
}
