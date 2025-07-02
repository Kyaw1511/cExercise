#include <stdio.h>
#include <string.h>

int main() {
    char first[50];
    char last[50];

    printf("Enter your first name: ");
    fflush(stdout);  // Make sure prompt appears before input
    fgets(first, sizeof(first), stdin);

    // Remove newline from input
    //first[strcspn(first, "\n")] = '\0';

    printf("Enter your last name: ");
    fflush(stdout);
    fgets(last, sizeof(last), stdin);
    //last[strcspn(last, "\n")] = '\0';

    printf("\nYour full name is: %s %s\n", first, last);

    return 0;
}

