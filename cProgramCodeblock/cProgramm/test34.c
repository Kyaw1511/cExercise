#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include "info.h"

int main(){
    FILE * kyawMinThein;
    char name[100];

    kyawMinThein = fopen("file.txt", "r");

    if(kyawMinThein == NULL) {
        printf("There is no file");

    } else {
        printf("There is a file.");
    }
    //fprintf(kyawMinThein, "Hello guys");
    //fprintf(kyawMinThein, "\n\n");
    //fprintf(kyawMinThein, "This is a testing ....");
    //fprintf(kyawMinThein, "\n\n");
    //fprintf(kyawMinThein, "This is writing testing \n\n");

    //fputs("name >> kyawMinThein", kyawMinThein);

    // testing for reading
    //fscanf(kyawMinThein, "%s", name);
    fgets(name, 100, kyawMinThein);
    printf("\n\n\n%s", name);

    fclose(kyawMinThein);

    return 0;
}
