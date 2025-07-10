#include <stdio.h>
#include <string.h>

int main() {
    char firstName[100]; // Make sure buffers are large enough
    char lastName[100];
    char fullName[201]; // sum of sizes + space + null terminator;

    printf("Enter your first Name :: ");
    if (fgets(firstName, sizeof(firstName), stdin) == NULL ) {
        perror("Error reading first name");

        return 1;
    }
    // Remove the trailing newline character, if present
    // strcspn finds the length of the initial segment of first name
    // which consists of charcters NOT in "\n".
    // So, it finds the position of the first "\n".

    firstName[strcspn(firstName, "\n")] = 0;

    printf("Enter your last name :: ");
    if (fgets(lastName, sizeof(lastName), stdin) == NULL ) {
        perror("Error reading last name");

        return 1;
    }

    lastName[strcspn(lastName, "\n")] = 0;

    printf("Debug: Raw firstName : %s \n", firstName);
    printf("Debug: Raw lastName  : %s \n", lastName);

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("Your full name :: %s", fullName);

    return 0;

}
