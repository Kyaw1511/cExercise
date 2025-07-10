#include <stdint-gcc.h>
#include <stdio.h>
#include <string.h>

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

}

int main() {
    char firstName[100];
    char lastName[100];
    char fullName[300] = "";

    //clearInputBuffer();

    printf("Enter your first name :: ");
    fgets(firstName, sizeof(firstName), stdin);
    firstName[strcspn(firstName, "\n")] = 0;
    printf("Enter your last name :: ");
    fgets(lastName, sizeof(lastName), stdin);
    lastName[strcspn(lastName, "\n")] = 0;


    strcat(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("\n your full name is %s\n", fullName);

    return 0;
}
