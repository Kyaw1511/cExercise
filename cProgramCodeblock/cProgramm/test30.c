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
    char position[100]
};

typedef struct staff work;
int main()
{
    work staff1, *p;
    p = &staff1;

    printf("Enter your name \n: ");
    scanf("%s", p->name);
    //fgets(p->name);
    printf("Enter your id \n:");
    scanf("%d", &p->id);
    printf("Enter your position \n: ");
    scanf("%s", p->position);
    //fgets(p->position);

    // printout line
    printf("\n\n %s \t %d \t %s", p->name, p->id, p->position);
    printf("\n\n %s \t %d \t %s", staff1.name, staff1.id, staff1.position);

    return 0;
}
