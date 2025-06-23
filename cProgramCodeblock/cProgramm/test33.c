#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include "info.h"

void menu(); // firstly to declare

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
    info *p;
    if(head == NULL) {
        head = (info *) malloc(sizeof(info));
        p = head;

    } else {
        p = head;
        while(p->next != NULL) {
            p = p-> next;
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
    info *p;
    p = head;
    while (p != NULL) {
        printf("\nid :: %d \n", p->id);
        printf("name :: %s \n", p->name);
        printf("Age :: %d \n\n", p->age);

        p = p-> next;

        // additional commit after watching deleting all info;
        /*if(p == NULL) {
            printf("You have No ID \n\n");
        }*/
    }

}

// deleting
void deleting() {
    info *p, *d;
    int idToDelete;
    p = head;
    d = head;
    listening();

    printf("Which id do you want to DELETE :\n");
    scanf("%d", &idToDelete);

    if(p-> id == idToDelete) {
        head = p-> next;
        free(p);
    } else {
        p = head;
        while(p-> next != NULL) {
                d = p;
                p = p->next;
            if(p -> id == idToDelete) {
                d->next = p->next;
                free(p);
            }
        }
    }
}

// changing function
void changing() {
    info *p;
    p = head;
    int idToShow;
    printf("Enter you ID to change \n :");
    scanf("%d", &idToShow);
    while(p != NULL) {
        if(p-> id == idToShow) {
            printf("Name :: %s \n", p-> name);
            printf("Age :: %d\n\n", p->age);
            printf("Enter your new name :: \n");
            scanf("%s", &p->name);
            printf("\n Enter your new age \n ::");
            scanf("%d", &p->age);
            break;
        }
        if(p->next == NULL ) {
            printf("\n\n There is no %d iD in the list \n\n");
        }
        p = p->next;
    }
}
// changing value
void changingValue() {
    info *p, *h;
    int temp, firstId, secId;
    char nameTemp[50];
    printf("Enter first ID to change the info \n::");
    scanf("%d", &firstId);
    printf("Enter second ID to change the info \n::");
    scanf("%d", &secId);

    p = head;
    h = head;
    while (p->next != NULL) {
        if (p->id == firstId) {
            break;
        } else if (p->next == NULL) {
            printf("There is no %d ID in the list \n\n", firstId);
            menu();
        }
        p = p->next;
    }
    while (h->next != NULL) {
        if (h->id == secId) {
            break;
        } else if (h->next == NULL) {
            printf("There is no %d in the list \n\n", secId);
            menu();
        }
        h = h->next;
    }
    strcpy(nameTemp, p->name);
    strcpy(p->name, h->name);
    strcpy(h->name, nameTemp);
    temp = p->age;
    p->age = h->age;
    h->age = temp;
    printf("The place have been changed \n\n");
}

//menu function
void menu() {
    int selection;
    printf("Press 1 to register your information \n");
    printf("Press 2 to list all the information \n");
    printf("Press 3 to delete your info \n");
    printf("Press 4 to change your info\n");
    printf("Press 5 to change your info in the other place \n");
    printf("Press 0 to exit \n");

    scanf("%d", &selection);

    //call selection
    switch(selection) {
        case 1: adding(); menu();
        case 2: listening(); menu();
        case 3: deleting(); printf("Already deleted for iD...\n"); menu();
        case 4: changing(); printf("Already changing for data.>>> \n"); menu();
        case 5: changingValue(); menu();

        case 0: return; // not including zero for return

        default : menu();
    }
}

int main() {
    head = NULL;
    menu();

    //check for head

    return 0;
}
