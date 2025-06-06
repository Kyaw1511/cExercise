#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"
#include <conio.h>


int main()
{
    char password[30];
    int z,x;
    for(z = 0; z < 30; z++) {
        password[z] = getch();
        if (password[z] == 13) {
            break;
        }
        putchar('x');
    }
    printf("\n");
    for(x = 0; x < z; x++) {
        putchar(password[x]);
    }
    getch();
    return 13;
    //return 0;

}
