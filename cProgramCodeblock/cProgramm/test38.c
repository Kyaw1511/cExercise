#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include "info.h"

struct info {
    char name[100];
    int id;
    int balance;

};

int main() {
    struct info infoMaker;
    FILE * kyawMinThein;

    kyawMinThein = fopen("tested4.txt", "a+");

    printf("Enter your name :: \n");
    gets(infoMaker.name);
    printf("Enter your id :: \n");
    scanf("%d", &infoMaker.id);
    printf("Enter your balance :: \n");
    scanf("%d", &infoMaker.balance);

    fwrite(&infoMaker, sizeof(infoMaker), 1, kyawMinThein);

    fclose(kyawMinThein);

    return 0;

}
