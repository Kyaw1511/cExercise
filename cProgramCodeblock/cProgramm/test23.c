#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include "info.h"

int main()
{
    struct user{
        int id;
        char name[30];
        int age;
        float incoming;
    }user1;
    struct user user2;
    user1.id = 1;
    user2.id = 2;
    printf("Enter a name for user1\n");
    gets(user1.name);
    printf("%s", user1.name);

    return 0;
}
