#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"

int main()
{
    char name[30];
    printf("Hello %s \n", NAME);
    printf("your age is %d \n", AGE);
    printf("your address is %s \n",  ADDRESS);
    printf("Enter your name \n");
    scanf("%s", name);
    printf( "Your name is %s", name);

    return 0;
}
