#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include "info.h"

struct information {
    char name[100];
    int id;
    int age;
    char position[100];
    struct information *next;

};

typedef struct information info;
info *head;
void adding() {
    //printf("This is adding function");
    info * p;
    if(head == NULL) {
        head = (info *) malloc(sizeof(info));
        p = head;

    } else {
        p = head;
        while(p->next != NULL) {
            p = p -> next;
        }
        p->next = (info *) malloc (sizeof(info));
        p = p->next;
    }
    printf("Enter your ID \n");
    scanf("%d", &p->id);
    printf("Enter your name \n");
    scanf("%s", p->name);
    printf("Enter your age \n");
    scanf("%d", &p->age);

    p -> next = NULL;
}

// listening
void listening() {
    info * p;
    p = head;
    while (p != NULL) {
        printf("id :: %d \n", p->id);
        printf("name :: %s \n", p->name);
        printf("Age :: %d \n\n", p->age);

        p = p-> next;
    }
}

//menu function
void menu() {
    int selection;
    printf("Press 1 to register your information \n");
    printf("Press 2 to list all the information \n");
    printf("Press 3 to delete your info \n");
    printf("Press 4 to change your info in the other place \n");
    printf("Press 0 to exit \n");

    scanf("%d", &selection);

    //call selection
    switch(selection) {
        case 1: adding(); menu();
        case 2: listening(); menu();

        case 0: return ; // not including zero for return

        default : menu();
    }
}

int main() {
    head = NULL;
    menu();

    //check for head

    return 0;
}
