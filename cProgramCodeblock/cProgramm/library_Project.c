#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include "info.h"
#include <ctype.h>
#include <dos.h>
#include <time.h>
#include <windows.h>

// Global Variables



// welcoming
void welcoming() {
    char welcome[100] = "Welcome to Library Programm";
    int i;
    printf("\t\t\t\t\t");

    // for looping Welcome char;
    for(i=0; i<strlen(welcome); i++) {
        Sleep(70); // delay for 7 seconds to show in terminal;
        printf("%c", welcome[i]);

    }
    time_t rawtime;
    struct tm*timeinfo;

    time (&rawtime);
    timeinfo = localtime( (&rawtime));
    Sleep(130);
    printf("\n\t\t\t\tCurrent Local Time and Date :: %s", asctime(timeinfo));
    printf("\n\n\n");

}

int main() {

    // callback function for welcoming
    welcoming();

    return 0;

}
