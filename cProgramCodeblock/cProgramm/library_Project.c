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
FILE*programming;
FILE*maths;
FILE*english;

//structure for book;
struct book {
    char firstName[100];
    char lastName[100];
    char fullName[301];
    char bookName[100];
    int studentId;
    int startDay;
    int startMonth;
    int startYear;
    int endDay;
    int endMonth;
    int endYear;
    //char bookName[100];

};

struct book bookDoc; // for reading and writing.

// function prototype as global declaration function
void adding();
void removing();
void checking();
void logIn();
void welcomeNow();
void category();



// structure of default admin;g
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
            welcomeNow();
            return ;

        } else{
            Sleep(1000);
            printf("\n\n\t\tWrong Password Try Again ....... \n\n");
            getch();
            system("cls");

            return ; // return main() is not working;
        }

}

// welcoming now;
void welcomeNow() {
    char welcome[100] = "Welcome to Library Program";
    int i;
    unsigned int d = 100;
    printf("\t\t\t\t\t");
    for(i=0; i<strlen(welcome); i++) {
        Sleep(0);
        printf("%c", welcome[i]);

    }
    time_t rawtime;
    struct tm*timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    Sleep(0);
    printf("\n\t\t\tCurrent local time and date :: %s", asctime(timeinfo));
    printf("\n\n\n");
}

// menu function
void menu() {
    int selection;
    char check;

    printf("\t\t\t\t1.Add Book to List \n");
    Sleep(200);
    printf("\t\t\t\t2.Remove Book from List\n");
    Sleep(200);
    printf("\t\t\t\t3.Check Book List\n");
    Sleep(200);
    printf("\t\t\t\t4.Change LogIn info\n");
    Sleep(200);
    printf("\t\t\t\t0.Exit\n\n\t\t\t\t");
    Sleep(200);
    scanf("%d", &selection);

    switch(selection) {

        // run case 1;
        case 1: adding();
            while(1) { // loop infinite.
                system("cls");
                welcomeNow();
                printf("\n\n\t\t\tDo you want to continue here (Y/N)\t:: ");
                scanf("%s", &check);

                if(check == 'Y' || check == 'y') {
                    adding();
                } else {
                    system("cls");
                    welcomeNow();
                    menu();
                }
            }
            break;

        // Run case 2;
        case 2: removing();
            while(1) {
                system("cls");
                welcomeNow();
                printf("\n\n\t\t\t\tDo you want to continue here (Y/N)\t ::");
                scanf("%s", &check);

                if(check == 'Y' || check == 'y') {
                    removing();

                } else {
                    system("cls");
                    welcomeNow();
                    menu();
                }
            }
            break;

        // case 3checking()
        case 3: checking();
            while(1) {
                system("cls");
                welcomeNow();
                printf("\n\n\t\t\t\tDo you want to continue here (Y/N)\t ::");
                scanf("%s", &check);

                if(check == 'Y' || check == 'y') {
                    checking();

                } else {
                    system("cls");
                    welcomeNow();
                    menu();
                }
            }
            break;

        //case 4 login()
        case 4: logIn();
            while(1) {
                system("cls");
                welcomeNow();
                printf("\n\n\t\t\t\tDo you want to continue here (Y/N)\t ::");
                scanf("%s", &check);

                if(check == 'Y' || check == 'y') {
                    logIn();

                } else {
                    system("cls");
                    welcomeNow();
                    menu();
                }
            }
            break;

        // case0;
        case 0: system("cls");
            printf("\t\t\tSee you soon.... \n\n\n\t\t\t Written by Kyaw Min Thein \n\n");
            printf("\t\t\t Credit to Programming MM School \n\n\n\n");
            getch();
            exit(0); // system exit.
            break;

        default : system("cls");
            welcomeNow();
            menu();
            break;
    }
    getch(); // not necessary ...

}


// avoid for goes to last name cursor;
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
// menu adding
void adding() {

    system("cls");
    welcomeNow();
    int selection;
    char check;
    category();
    scanf("%d", &selection);

    switch(selection) {
        //programming selection;
        case 1:
            system("cls"); //not to show anything on screen.
            welcomeNow();
            //while((c = getch()) != '\n' && c != EOF){} //flash stdin manually
            printf("\n\n\n\t\t\t\tEnter Student First Name :: ");
            /*if (fgets(bookDoc.firstName, sizeof(bookDoc.firstName), stdin) == NULL ) {
                perror("Error reading first name ! ");

                return ;
            }*/

            //fflush(stdout); // make sure prompt appears before input.
            //scanf("%s", bookDoc.firstName);
            //gets(bookDoc.firstName);
            //fgets(bookDoc.firstName, sizeof(bookDoc.firstName), stdin);
            bookDoc.firstName[strcspn(bookDoc.firstName, "\n")] = 0;
            //printf("\nYour first Name is %s", bookDoc.firstName);

            clearInputBuffer(); // if using two times of fgest should use before finishing one fgets....

            printf("\n\t\t\t\tEnter Student Last Name :: ");

            /*if (fgets(bookDoc.lastName, sizeof(bookDoc.lastName), stdin) == NULL ) {
                perror("Error reading Last name !");

                return ;
            }
            */

            //fflush(stdout);
            //scanf("%s", bookDoc.lastName);
            //gets(bookDoc.lastName);
            //fgets(bookDoc.lastName,sizeof(bookDoc.lastName), stdin);
            bookDoc.lastName[strcspn(bookDoc.lastName, "\n")] = 0;
            //printf("\nYour last name is %s >>", bookDoc.lastName);

            // testing;
            //printf("\t\t\tEnter your Full Name :: ");
            //fgets(bookDoc.fullName, sizeof(bookDoc.fullName), stdin);

            printf("Debug: first name = %s \n", bookDoc.firstName);
            printf("Debug: second name = %s \n", bookDoc.lastName);

            strcpy(bookDoc.fullName, bookDoc.firstName);
            strcat(bookDoc.fullName, " ");
            strcat(bookDoc.fullName, bookDoc.lastName);
            //snprintf(bookDoc.fullName, sizeof(bookDoc.fullName), "%s %s", bookDoc.firstName, bookDoc.lastName);
            printf("\n your full name is %s\n", bookDoc.fullName);


            printf("\n\t\t\t\tEnter Book Name :: ");
            scanf("%s", bookDoc.bookName);
            //nclearInputBuffer();
            printf("\t\t\t\tEnter Student ID :: ");
            scanf("%d", &bookDoc.studentId);
            printf("\t\t\t\tEnter the Start Date(DD--MM--YY) :: ");
            scanf("%d--%d--%d", &bookDoc.startDay, &bookDoc.startMonth, &bookDoc.startYear);
            printf("\t\t\t\tEnter the End Date(DD--MM--YY) ::");
            scanf("%d--%d--%d", &bookDoc.endDay, &bookDoc.endMonth, &bookDoc.endYear);
            programming = fopen("programming.txt", "a+");
            fwrite(&bookDoc, sizeof(bookDoc), 1, programming);
            fclose(programming);
            Sleep(1000);
            printf("\n\n\n\t\t\t\tThe Book info have been saved successfully .......");
            getch();
            system("cls");
            welcomeNow();
            //clearInputBuffer();

            break;

    }
    //printf("test");
}

// menu remove
void removing() {
    printf("test");
}

// menu checking
void checking() {
    printf("test");
}

// menu login
void logIn() {
    printf("test");
}

// category function
void category() {
    printf("\n\n\n\t\t\t\t1.Programming\n");
    printf("\t\t\t\t2.Maths\n");
    printf("\t\t\t\t3.English\n");
    printf("\t\t\t\t4.Physics\n");
    printf("\t\t\t\t5.Chemistry\n");
    printf("\t\t\t\t6.Biology\n");
    printf("\t\t\t\t0.Go to Back\n\n\t\t\t >>>");
}

// main function
int main() {

    // callback function for welcoming
    welcoming();

    // for password;
    password();
    //welcomeNow();
    menu();

    return 0;

}
