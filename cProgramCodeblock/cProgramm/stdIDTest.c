#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Needed for strlen()
#include <ctype.h> // Needed for isdigit()

#define MaX_ID_LENGTh 10

//bug for StudentID_1.4 (commit name);
// This is a testing for student ID section.
// Because I have in trobule when the output has extra nubmer in StudentID
// So, it is just the part of solution 

int main() {
    char input_buffer[MaX_ID_LENGTh];
    int is_valid = 1;
    int i;
    int studentID = 0;

    printf("\nEnter Student ID (digits only): "); 
    //printf("Enter Student ID: ");
    if (fgets(input_buffer, MaX_ID_LENGTh, stdin) == NULL) {
        //printf("Error reading input. \n");
        return 1;

    }

    //original code;
    // int len = strlen(input_buffer);
    // if (input_buffer[len - 1] == '\n') {
    //     len = len -1; 

    // }

    // tested
    int len = strlen(input_buffer);
    if ( len > 0 && input_buffer[len -1] == '\n') {
        // input_buffer[len - 1] = '\0';
        len = len-1;
        
    }
    if (len > 9 ) {
            printf("greater");
            fflush(stdout);
            return 1;

    } else {
            printf("less than");
            return 0;
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
        studentID = atoi(input_buffer);
        printf("\n Validationn passed. Stored ID: %d\n", studentID);

    } else {
        printf("\n Validation Failed! Input contains non-digit characters. \n");
    }

    int x;
    while ((x = getchar()) != '\n' && x != EOF);

    //studentID = atoi(input_buffer);
    printf("Successfully stored ID as an integer: %d\n", studentID);

    return 0;

}



