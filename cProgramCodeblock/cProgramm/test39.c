#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include "info.h"

struct info1 {
    char name[100];
    int id;
    int balance;

};

int main() {
    struct info1 infoMaker1;
    FILE * kmt;
    kmt = fopen("tested5.txt", "a+");

    fread(&infoMaker1, sizeof(infoMaker1), 1,kmt);

    while (!feof(kmt)) {
        /*
        printf("Name >> \n");
        gets(infoMaker1.name);
        printf("ID >> \n");
        scanf("%d", &infoMaker1.id);
        printf("Balance >>> \n");
        scanf("%d", &infoMaker1.balance);
        */
        printf("name :: %s \n iD :: %d \n Balance ::%d \n\n", infoMaker1.name, &infoMaker1.id, &infoMaker1.balance);

        fread(&infoMaker1, sizeof(infoMaker1), 1, kmt);

    }

    //fread(&infoMaker1, sizeof(infoMaker1), 1,kmt);

    fclose(kmt);

    return 0;
}

