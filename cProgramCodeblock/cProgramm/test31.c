#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "info.h"

struct staff
{
    char name[100];
    int id;
    char position[100];

};

typedef struct staff work;
int main()
{
    work staff1, *p;
    //using for malloc for p;
    p = (struct staff*) malloc(sizeof(struct staff));

    //staff1 = (struct staff1*) malloc(sizeof(struct staff1));

    //request from user;
    printf("Enter your name : \n");
    scanf("%s", p->name);
    printf("Enter your id : \n");
    scanf("%d", &p->id);
    printf("Enter your position : \n");
    scanf("%s", p->position);

    //printout
    printf("\n\n %s \t %d \t %s", p->name, p->id, p->position);
    //printf("\n\n %s \t %d \t %s", staff1.name, staff1.id, staff1.position);

    return 0;
}



