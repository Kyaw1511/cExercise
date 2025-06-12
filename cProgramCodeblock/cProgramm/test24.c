#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "info.h"

int main()
{
    struct user{
        int id;
        char name[40];
        int age;
        char position[100];
        float incoming;

    }user1;

    struct user user2;
    user1.id = 1;
    user2.id = 2;
    printf("Enter your name user1\n");
    gets(user1.name);
    printf("%s\n", user1.name);

    printf("Enter your age user1\n");
    scanf("%d", &user1.age);
    printf("%d\n", user1.age);

    return 0;
}
