#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include "info.h"

struct worker
{
    char name[100];
    //int id;
    char id[100];
    char position[100];
};

typedef struct worker office;
int main()
{
    office worker1, *p;
    //using for malloc for p;
    p = (struct worker*) malloc(sizeof(struct worker));

    //request from user;
    printf("Enter your name : \n");
    fgets(p->name, sizeof(p->name), stdin);
    printf("Enter your id : \n");
    //scanf("%d", &p->id);
    fgets(p->id, sizeof(p->id), stdin);
    printf("Enter your position : \n");
    fgets(p->position, sizeof(p->position), stdin);

    //printout
    printf("\n %s \t %s \t %s", p->name, p->id, p->position);

    return 0;
}
