#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include "info.h"
#include <ctype.h>
#include <dos.h>
#include <time.h>
#include <windows.h>

// Global Variables
FILE*passw;
FILE*logInSession;


// structure of default admin;
struct defaultAdmin{
    char adminName[50];
    char adminpass[50];

};
struct defaultAdmin admin = {"admin", "00000"}; // not uses ()
struct defaultAdmin adminCheck;


// welcoming
void welcoming() {
    char welcome[100] = "Welcome to Library Programm";
    int i;
    printf("\t\t\t\t\t");

    // for looping Welcome char;
    for(i=0; i<strlen(welcome); i++) {
        Sleep(70); // delay for 7 seconds to show in terminal;
        printf("%c", welcome[i]);

    }
    time_t rawtime;
    struct tm*timeinfo;

    time (&rawtime);
    timeinfo = localtime( (&rawtime));
    Sleep(130);
    printf("\n\t\t\t\tCurrent Local Time and Date :: %s", asctime(timeinfo));
    printf("\n\n\n");

}

// password
void password() {
    char pass[50] = "";
    char passCheck[50];
    int i,k;

    passw = fopen("password.txt", "r");
    if(passw == NULL) {
        fclose(passw);
        passw = fopen("password.txt", "a+");
        fwrite(&admin, sizeof(admin), 1, passw);
        fclose(passw);

    }
        Sleep(0);
        printf("\t\t");
        char text[50] = "The system is protected by Password.";

        for(i=0; i<strlen(text); i++) {
            Sleep(70);
            printf("%c", text[i]);
        }
        printf("\n\n");

        // Please enter admin password;
        printf("\t\tEnter the Admin Password :: ");
        for(i=0; i<50; i++) {
            pass[i] = getch();
            if(pass[i] == 13) {
                pass[i] = '\0'; // needed this statement;
                break;
            }
            // cover a letter to x;
            putchar('x');
        }
        // read file to password.txt;
        fread(&adminCheck, sizeof(adminCheck), 1, passw);

        if(strcmp(pass, adminCheck.adminpass)==0) {
            printf("\n\n\t\tWelcome back %s\n\n", adminCheck.adminName);
            printf("\t\tPress Any Key to continue >>>>> ");

            // logIn session;
            logInSession = fopen("logIn.txt", "a+");
            time_t rawtime;
            struct tm*timeinfo;

            time(&rawtime);
            timeinfo = localtime(&rawtime);
            fprintf(logInSession, "%s\n%s\n\n", asctime(timeinfo), adminCheck.adminName);
            fclose(passw);
            fclose(logInSession);
            getch();
            system("cls"); // clean the system;

        } else{
            Sleep(1000);
            printf("\n\n\t\tWrong Password Try Again ....... \n\n");
            getch();
            system("cls");

            return ;
        }

}

// main function
int main() {

    // callback function for welcoming
    welcoming();

    // for password;
    password();

    return 0;

}
