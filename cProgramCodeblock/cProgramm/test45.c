#include <stdio.h>
#include <string.h>

void testedFunction() {
    char firstName[100];
    char lastName[100];

    printf("Enter your first name :: ");
    fgets(firstName, sizeof(firstName), stdin);
    firstName[strcspn(firstName, "\n")] = 0;

    printf("Enter your last name :: ");
    fgets(lastName, sizeof(lastName), stdin);
    lastName[strcspn(lastName, "\n")] = 0;

    printf("Hello, %s %s ! Welcome. \n", firstName, lastName);

    if (strlen(firstName) == 0) {
        printf("You didn't enter a first name \n");
    }
}

int main() {
    testedFunction();

    return 0;
}
