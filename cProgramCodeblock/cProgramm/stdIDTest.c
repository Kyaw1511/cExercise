#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Needed for strlen()
#include <ctype.h> // Needed for isdigit()

#define MaX_ID_LENGTh 10 // but we access only 9 digits because one digit is space for \0

//bug for StudentID_1.4 (commit name);
// This is a testing for student ID section.
// We only access 9 digits 

int main() {
    char input_buffer[MaX_ID_LENGTh];
    int is_valid = 1; // to check digit?
    int i;
    int studentID = 0;

    printf("\n\nHello, Nice to meet you .... \n");
    printf("Please Enter StudentID not over 9digit .. \n\n");
    printf("\nEnter Student ID (digits only): "); 

    if (fgets(input_buffer, MaX_ID_LENGTh, stdin) == NULL) {
        printf("Error reading input. \n");
        return 1;
    }

    int len = strlen(input_buffer);
    if (input_buffer[len - 1] == '\n') {
        input_buffer[len - 1] = '\0';
        len = len -1;
    } 
    
    for (i = 0; i < len; i++) {
        char current_char = input_buffer[i];
        printf("tested");
        if (!isdigit(current_char)) {
            is_valid = 0;
            break;
        }
    }

    if (is_valid) {
        if(len > 8 ) {
            // We don't MaX_ID_LENGTh -2, 
            // because it is the low level API in system console.
            printf("\n\nYour StudentID is over 9 digits. \n");
            
        } else {
            studentID = atoi(input_buffer);
            printf("\n Validation Passed.... \n");
            printf("Stored ID : %d\n", studentID);
            printf("\nSuccessfully stored ID as an integer : %d\n", studentID);
        } 
    } else {
        printf("\n Validation Failed!");
        printf("\n Input contains non-digit characters. \n");
        printf("\n Your StudentID is included letter... ");    
    }

    return 1;
}