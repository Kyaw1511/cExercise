#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include "info.h"

int main()
{

    struct user {
        int id;
        char name[40];
        int age;
        float incoming;

    };
    struct user info[10];
    int i, z;
    printf("How many do you wnat to add user information\n");
    scanf("%d", &z);

    for(i = 0; i < z; i++) {
        printf("Enter your ID\n : ");
        scanf("%d", &info[i].id);
        printf("Enter your Name \n : ");
        scanf("%s", &info[i].name);
        printf("Enter your age \n : ");
        scanf("%d", &info[i].age);
        printf("Enter your incoming \n : ");
        scanf("%f", &info[i].incoming);
    }

    for (i = 0; i < z; i++) {
        printf("ID : %d\n", info[i].id);
        printf("Name : %s\n", info[i].name);
        printf("Age : %d\n", info[i].age);
        printf("Incoming : %f\n", info[i].incoming);
    }

    return 0;
    //return main();
}
