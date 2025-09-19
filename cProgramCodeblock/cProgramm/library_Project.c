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
FILE*physic;
FILE*chemistry;
FILE*biology;

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
    //char check;
    category();
    scanf("%d", &selection); // choose in the category;

    // after fixing here
    clearInputBuffer();

    switch(selection) {
        //programming selection;
        case 1:
            system("cls"); //not to show anything on screen.
            welcomeNow();
            printf("\n\n\n\t\t\t\tEnter Student First Name      :: ");
            fgets(bookDoc.firstName, sizeof(bookDoc.firstName), stdin);
            bookDoc.firstName[strcspn(bookDoc.firstName, "\n")] = 0;
            printf("\n\t\t\t\tEnter Student Last Name           :: ");
            fgets(bookDoc.lastName,sizeof(bookDoc.lastName), stdin);
            bookDoc.lastName[strcspn(bookDoc.lastName, "\n")] = 0;
            strcpy(bookDoc.fullName, bookDoc.firstName);
            strcat(bookDoc.fullName, " ");
            strcat(bookDoc.fullName, bookDoc.lastName);
            printf("\n\t\t\t\tYour full name                    :: %s\n", bookDoc.fullName);
            printf("\n\t\t\t\tEnter Book Name                   :: ");
            scanf("%s", bookDoc.bookName);
            printf("\n\t\t\t\tEnter Student ID                  :: ");
            scanf("%d", &bookDoc.studentId);
            printf("\n\t\t\t\tEnter the Start Date(DD--MM--YY)  :: ");
            scanf("%d--%d--%d", &bookDoc.startDay, &bookDoc.startMonth, &bookDoc.startYear);
            printf("\n\t\t\t\tEnter the End Date(DD--MM--YY)    ::");
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

        // maths section;
        case 2:
            system("cls"); // all output cmd would be clear;
            welcomeNow();

            printf("\n\n\n\t\t\t\tEnter Your First Name :: ");
            fgets(bookDoc.firstName, sizeof(bookDoc.firstName), stdin);
            bookDoc.firstName[strcspn(bookDoc.firstName, "\n")] = 0;

            printf("\n\t\t\t\tEnter your Last Name :: ");
            fgets(bookDoc.lastName, sizeof(bookDoc.lastName), stdin);
            bookDoc.lastName[strcspn(bookDoc.lastName, "\n")] = 0;

            strcpy(bookDoc.fullName, bookDoc.firstName);
            strcat(bookDoc.fullName, " ");
            strcat(bookDoc.fullName, bookDoc.lastName);

            printf("\n\t\t\t\tYour Full Name :: %s \n", bookDoc.fullName );
            printf("\n\t\t\t\tEnter Book Name :: ");
            scanf("%s", bookDoc.bookName);
            printf("\n\t\t\t\tEnter Student ID :: ");
            scanf("%d", &bookDoc.studentId);
            printf("\n\t\t\t\tEnter the Start Date (DD--MM--YY) :: ");
            scanf("%d--%d--%d", &bookDoc.startDay, &bookDoc.startMonth, &bookDoc.startMonth);
            printf("\n\t\t\t\tEnter the End Date (DD--MM--YY) :: ");
            scanf("%d--%d--%d", &bookDoc.endDay, &bookDoc.endMonth, &bookDoc.endYear);

            maths = fopen("maths.txt", "a+");
            fwrite(&bookDoc, sizeof(bookDoc), 1, maths);
            fclose(maths);
            Sleep(1000);
            printf("\n\n\n\t\t\t\tThe Book info have been saved successfully ....... ");
            getch();
            system("cls");
            welcomeNow();

            break;

        // english section
        case 3:
            system("cls");
            welcomeNow();
            printf("\n\n\n\t\t\t\tEnter Student First Name :: ");
            fgets(bookDoc.firstName, sizeof(bookDoc.firstName), stdin);
            bookDoc.firstName[strcspn(bookDoc.firstName, "\n")] = 0;

            printf("\n\t\t\t\tEnter Student Last Name :: ");
            fgets(bookDoc.lastName, sizeof(bookDoc.lastName), stdin);
            bookDoc.lastName[strcspn(bookDoc.lastName, "\n")] = 0;

            strcpy(bookDoc.fullName, bookDoc.firstName);
            strcat(bookDoc.fullName, " ");
            strcat(bookDoc.fullName, bookDoc.lastName);

            printf("\n\t\t\t\tYour Full Name :: %s \n", bookDoc.fullName);
            printf("\n\t\t\t\tEnter Book Name :: ");
            scanf("%s", bookDoc.bookName);

            printf("\n\t\t\t\tEnter Student ID :: ");
            scanf("%d", &bookDoc.studentId);

            printf("\n\t\t\t\tEnter the Start Date (DD--MM--YY) :: ");
            scanf("%d--%d--%d", &bookDoc.startDay, &bookDoc.startMonth, &bookDoc.startYear);

            printf("\n\t\t\t\tEnter the Last Date (DD--MM--YY) :: ");
            scanf("%d--%d--%d", &bookDoc.endDay, &bookDoc.endMonth, &bookDoc.endYear);

            english = fopen("english.txt", "a+");
            fwrite(&bookDoc, sizeof(bookDoc), 1, english);
            fclose(english);
            Sleep(1000);

            printf("\n\n\n\t\t\t\tThe Book info have been saved successfully .......");
            getch();
            system("cls");
            welcomeNow();

            break;

        // physic section
        case 4:
            system("cls");
            welcomeNow();
            printf("\n\n\n\t\t\t\tEnter Student First Name :: ");
            fgets(bookDoc.firstName, sizeof(bookDoc.firstName), stdin);
            bookDoc.firstName[strcspn(bookDoc.firstName, "\n")] = 0;

            printf("\n\t\t\t\tEnter Student Last Name :: ");
            fgets(bookDoc.lastName, sizeof(bookDoc.lastName), stdin);
            bookDoc.lastName[strcspn(bookDoc.lastName, "\n")] = 0;

            strcpy(bookDoc.fullName, bookDoc.firstName);
            strcat(bookDoc.fullName, " ");
            strcat(bookDoc.fullName, bookDoc.lastName);
            printf("\n\t\t\t\tYour Full Name :: %s\n", bookDoc.fullName);

            printf("\n\t\t\t\tEnter Book Name :: ");
            scanf("%s", bookDoc.bookName);

            printf("\n\t\t\t\tEnter Student ID :: ");
            scanf("%d", &bookDoc.studentId);

            printf("\n\t\t\t\tEnter the Start Date (DD--MM--YY) :: ");
            scanf("%d--%d--%d", &bookDoc.startDay, &bookDoc.startMonth, &bookDoc.startYear);

            printf("\n\t\t\t\tEnter the End Date (DD--MM--YY) :: ");
            scanf("%d--%d--%d", &bookDoc.endDay, &bookDoc.endMonth, &bookDoc.endYear);

            physic = fopen("physic.txt", "a+");
            fwrite(&bookDoc, sizeof(bookDoc), 1, physic);
            fclose(physic);
            Sleep(1000);
            printf("\n\n\n\t\t\t\tThe Book info have been saved successfully ....... ");
            getch();
            system("cls");
            welcomeNow();

            break;

        // chemistry section
        case 5:
            system("cls");
            welcomeNow();
            printf("\n\n\n\t\t\t\tEnter Student First Name :: ");
            fgets(bookDoc.firstName, sizeof(bookDoc.firstName), stdin);
            bookDoc.firstName[strcspn(bookDoc.firstName, "\n")] = 0;

            printf("\n\t\t\t\tEnter Student Last Name :: ");
            fgets(bookDoc.lastName, sizeof(bookDoc.lastName), stdin);
            bookDoc.lastName[strcspn(bookDoc.lastName, "\n")] = 0;

            strcpy(bookDoc.fullName, bookDoc.firstName);
            strcat(bookDoc.fullName, " ");
            strcat(bookDoc.fullName, bookDoc.lastName);
            printf("\n\t\t\t\tYou Full Name :: %s \n", bookDoc.fullName);

            printf("\n\t\t\t\tEnter Book Name :: ");
            scanf("%s", bookDoc.bookName);
            printf("\n\t\t\t\tEnter Student ID :: ");
            scanf("%d", &bookDoc.studentId);

            printf("\n\t\t\t\tEnter the Start Date (DD--MM--YY) :: ");
            scanf("%d--%d--%d", &bookDoc.startDay, &bookDoc.startMonth, &bookDoc.startYear);

            printf("\n\t\t\t\tEnter the End Date (DD--MM--YY) :: ");
            scanf("%d--%d--%d", &bookDoc.endDay, &bookDoc.endMonth, &bookDoc.endYear);

            chemistry = fopen("chemistry.txt", "a+");
            fwrite(&bookDoc, sizeof(bookDoc), 1, chemistry);
            fclose(chemistry);
            Sleep(1000);

            printf("\n\n\n\t\t\t\tThe Book info have been saved successfully .......  ");
            getch();
            system("cls");
            welcomeNow();

            break;

        // biology section
        case 6:
            system("cls");
            welcomeNow();
            printf("\n\t\t\t\tEnter Student First Name :: ");
            fgets(bookDoc.firstName, sizeof(bookDoc.firstName), stdin);
            bookDoc.firstName[strcspn(bookDoc.firstName, "\n")] = 0;

            printf("\n\t\t\t\tEnter Student Last Name :: ");
            fgets(bookDoc.lastName, sizeof(bookDoc.lastName), stdin);
            bookDoc.lastName[strcspn(bookDoc.lastName, "\n")] = 0;

            strcpy(bookDoc.fullName, bookDoc.firstName);
            strcat(bookDoc.fullName, " ");
            strcat(bookDoc.fullName, bookDoc.lastName);
            printf("\n\t\t\t\tYour Full Name :: %s \n", bookDoc.fullName);

            printf("\n\t\t\t\tEnter Book Name :: ");
            scanf("%s", bookDoc.bookName);
            printf("\n\t\t\t\tEnter Student ID :: ");
            scanf("%d", &bookDoc.studentId);

            printf("\n\t\t\t\tEnter the Start Date (DD--MM--YY) :: ");
            scanf("%d--%d--%d", &bookDoc.startDay, &bookDoc.startMonth, &bookDoc.startYear);
            printf("\n\t\t\t\tEnter the End Date (DD--MM--YY) :: ");
            scanf("%d--%d--%d", &bookDoc.endDay, &bookDoc.endMonth, &bookDoc.endYear);

            biology = fopen("biology.txt", "a+");
            fwrite(&bookDoc, sizeof(bookDoc), 1, biology);
            fclose(biology);
            Sleep(1000);
            printf("\n\n\n\t\t\t\tThe Book info have been saved successfully ....... ");
            getch();
            system("cls");
            welcomeNow();

            break;

    }
}

// menu remove
void removing() {
    //printf("test");

    struct book zero = { "", "", "", 0,0,0,0,0,0,0};
    char bookName[50];
    int select;
    int i = 0;
    int k;
    system("cls");
    welcomeNow();
    category();
    scanf("%d", &select);
    switch(select) {

    case1:
        system("cls");
        welcomeNow();
        programming = fopen("programming.txt", "r+");
        fread(&bookDoc, sizeof(bookDoc), 1, programming);
        while(!feof(programming)) {
            if(bookDoc.studentId != 0) {
                printf("\n\n\n\t\t\t\tStudent Name          : %s %s\n", bookDoc.firstName, bookDoc.lastName);
                printf("\t\t\t\tStudent ID                  : %d\n", bookDoc.studentId);
                printf("\t\t\t\tBook Name                   : %s\n", bookDoc.bookName);
                printf("\t\t\t\tStart Date (DD--MM--YY)     : %d--%d--%d\n", bookDoc.startDay, bookDoc.startMonth, bookDoc.startYear);
                printf("\t\t\t\tEnd Date (DD--MM--YY)       : %d--%d--%d\n", bookDoc.endDay, bookDoc.endMonth, bookDoc.endYear);
                Sleep(1000);
                fread(&bookDoc, sizeof(bookDoc), 1, programming);
                getch();

            } else {
                fread(&bookDoc, sizeof(bookDoc), 1, programming);
            }
        }
        printf("\n\n\n\t\t\t\tEnter Book Name to Remove from the list : ");
        scanf("%s", bookName);
        rewind(programming);
        fread(&bookDoc, sizeof(bookDoc), 1, programming);
        while (!feof(programming)) {
            if(strcmp(bookDoc.bookName, bookName) == 0) {
                break;
            }
            i++;
            fread(&bookDoc, sizeof(bookDoc), 1, programming);
        }
        fseek(programming, i*sizeof(bookDoc), SEEK_SET);
        fwrite(&zero, sizeof(zero), 1, programming);
        fclose(programming);
        printf("\n\n\t\t\t\tSearching");
            for(k = 0; k < 3; k++) {
                Sleep(700);
                printf(".");
            }
        printf("\n\n\t\t\t\tFound....");
        printf("\n\n\t\t\t\tDeleting");
            for(k=0; k<3; k++) {
                Sleep(700);
                printf(".");
        }
        printf("\n\n\t\t\t\tDone ....");
        printf("\n\n\t\t\t\tPress Any Key to Go Back .....  ");
        getch();
        system("cls");
        welcomeNow();
        menu();

    }
}

// menu checking
void checking() {
    system("cls");
    int selections;
    welcomeNow();
    category();
    scanf("%d", &selections);

    switch(selections) {
    //programming
    case 1:
        system("cls");
        welcomeNow();

        programming = fopen("programming.txt", "r");
        fread(&bookDoc, sizeof(bookDoc), 1, programming);
        while (!feof(programming)) {
            if(bookDoc.studentId != 0) {
                printf("\n\n\n\t\t\t\tStudent Name : %s %s\n", bookDoc.firstName, bookDoc.lastName);
                printf("\t\t\t\tBook Name : %s\n", bookDoc.bookName);
                printf("\t\t\t\tStudent ID : %d\n", &bookDoc.studentId);
                printf("\t\t\t\tStart Date (DD--MM--YY) : %d--%d--%d\n", &bookDoc.startDay, &bookDoc.startMonth, &bookDoc.startYear);
                printf("\t\t\t\tEnd Date (DD--MM--YY) : %d--%d--%d\n", &bookDoc.endDay, &bookDoc.endMonth, &bookDoc.endYear);
                Sleep(1000);
                fread(&bookDoc, sizeof(bookDoc), 1, programming);
                getch();

            } else {
                fread(&bookDoc, sizeof(bookDoc), 1, programming);
            }
        }
        fclose(programming);
        break;

        // maths
        case 2:
        system("cls");
        welcomeNow();

        maths = fopen("maths.txt", "r");
        fread(&bookDoc, sizeof(bookDoc), 1, maths);
        while (!feof(maths)) {
            if(bookDoc.studentId != 0) {
                printf("\n\n\n\t\t\t\tStudent Name : %s %s\n", bookDoc.firstName, bookDoc.lastName);
                printf("\t\t\t\tBook Name : %s\n", bookDoc.bookName);
                printf("\t\t\t\tStudent ID : %d\n", &bookDoc.studentId);
                printf("\t\t\t\tStart Date (DD--MM--YY) : %d--%d--%d\n", &bookDoc.startDay, &bookDoc.startMonth, &bookDoc.startYear);
                printf("\t\t\t\tEnd Date (DD--MM--YY) : %d--%d--%d\n", &bookDoc.endDay, &bookDoc.endMonth, &bookDoc.endYear);
                Sleep(1000);
                fread(&bookDoc, sizeof(bookDoc), 1, maths);
                getch();

            } else {
                fread(&bookDoc, sizeof(bookDoc), 1, maths);
            }
        }
        fclose(maths);
        break;

        //english
        case 3:
        system("cls");
        welcomeNow();

        english = fopen("english.txt", "r");
        fread(&bookDoc, sizeof(bookDoc), 1, english);
        while (!feof(english)) {
            if(bookDoc.studentId != 0) {
                printf("\n\n\n\t\t\t\tStudent Name : %s %s\n", bookDoc.firstName, bookDoc.lastName);
                printf("\t\t\t\tBook Name : %s\n", bookDoc.bookName);
                printf("\t\t\t\tStudent ID : %d\n", &bookDoc.studentId);
                printf("\t\t\t\tStart Date (DD--MM--YY) : %d--%d--%d\n", &bookDoc.startDay, &bookDoc.startMonth, &bookDoc.startYear);
                printf("\t\t\t\tEnd Date (DD--MM--YY) : %d--%d--%d\n", &bookDoc.endDay, &bookDoc.endMonth, &bookDoc.endYear);
                Sleep(1000);
                fread(&bookDoc, sizeof(bookDoc), 1, english);
                getch();

            } else {
                fread(&bookDoc, sizeof(bookDoc), 1, english);
            }
        }
        fclose(english);
        break;

        // physic;
        case 4:
        system("cls");
        welcomeNow();

        physic = fopen("physic.txt", "r");
        fread(&bookDoc, sizeof(bookDoc), 1, physic);
        while (!feof(physic)) {
            if(bookDoc.studentId != 0) {
                printf("\n\n\n\t\t\t\tStudent Name : %s %s\n", bookDoc.firstName, bookDoc.lastName);
                printf("\t\t\t\tBook Name : %s\n", bookDoc.bookName);
                printf("\t\t\t\tStudent ID : %d\n", &bookDoc.studentId);
                printf("\t\t\t\tStart Date (DD--MM--YY) : %d--%d--%d\n", &bookDoc.startDay, &bookDoc.startMonth, &bookDoc.startYear);
                printf("\t\t\t\tEnd Date (DD--MM--YY) : %d--%d--%d\n", &bookDoc.endDay, &bookDoc.endMonth, &bookDoc.endYear);
                Sleep(1000);
                fread(&bookDoc, sizeof(bookDoc), 1, physic);
                getch();

            } else {
                fread(&bookDoc, sizeof(bookDoc), 1, physic);
            }
        }
        fclose(physic);
        break;

        case 5:
        system("cls");
        welcomeNow();

        chemistry = fopen("chemistry.txt", "r");
        fread(&bookDoc, sizeof(bookDoc), 1, chemistry);
        while (!feof(chemistry)) {
            if(bookDoc.studentId != 0) {
                printf("\n\n\n\t\t\t\tStudent Name : %s %s\n", bookDoc.firstName, bookDoc.lastName);
                printf("\t\t\t\tBook Name : %s\n", bookDoc.bookName);
                printf("\t\t\t\tStudent ID : %d\n", &bookDoc.studentId);
                printf("\t\t\t\tStart Date (DD--MM--YY) : %d--%d--%d\n", &bookDoc.startDay, &bookDoc.startMonth, &bookDoc.startYear);
                printf("\t\t\t\tEnd Date (DD--MM--YY) : %d--%d--%d\n", &bookDoc.endDay, &bookDoc.endMonth, &bookDoc.endYear);
                Sleep(1000);
                fread(&bookDoc, sizeof(bookDoc), 1, chemistry);
                getch();

            } else {
                fread(&bookDoc, sizeof(bookDoc), 1, chemistry);
            }
        }
        fclose(chemistry);
        break;

        //biology
        case 6:
        system("cls");
        welcomeNow();

        biology = fopen("biology.txt", "r");
        fread(&bookDoc, sizeof(bookDoc), 1, biology);
        while (!feof(biology)) {
            if(bookDoc.studentId != 0) {
                printf("\n\n\n\t\t\t\tStudent Name : %s %s\n", bookDoc.firstName, bookDoc.lastName);
                printf("\t\t\t\tBook Name : %s\n", bookDoc.bookName);
                printf("\t\t\t\tStudent ID : %d\n", &bookDoc.studentId);
                printf("\t\t\t\tStart Date (DD--MM--YY) : %d--%d--%d\n", &bookDoc.startDay, &bookDoc.startMonth, &bookDoc.startYear);
                printf("\t\t\t\tEnd Date (DD--MM--YY) : %d--%d--%d\n", &bookDoc.endDay, &bookDoc.endMonth, &bookDoc.endYear);
                Sleep(1000);
                fread(&bookDoc, sizeof(bookDoc), 1, biology);
                getch();

            } else {
                fread(&bookDoc, sizeof(bookDoc), 1, biology);
            }
        }
        fclose(biology);
        break;

        case 0:
            system("cls");
            welcomeNow();
            menu();
            break;

        default:
            system("cls");
            welcomeNow();
            checking();
            break;
    }

    //printf("test");

}

// menu login
void logIn() {
    //printf("test");
    system("cls");
    welcomeNow();
    char checkName[50];
    char checkPass[50];
    char check;
    int i;
    printf("\n\t\t\t\tDo you want to change your Admin Name and Password. (Y/N)     : ");
    scanf("%s", &check);
    if (check == 'y' || check == 'Y') {
        printf("\n\t\t\t\tEnter Current Admin Name      : ");
        scanf("%s", &checkName);
        printf("\t\t\t\tEnter Current Admin Password    : ");
        for (i=0; i<50; i++) {
            checkPass[i] = getch();
            if(checkPass[i] == 13) {
                checkPass[i] = '\0';
                break;
            }
            putchar('*');
        }
        printf("\n\n\t\t\t\tLoading...");
        for (i=0; i<5; i++) {
            Sleep(700);
            printf(".");
        }
        passw = fopen("password.txt", "r+");
        fread(&adminCheck, sizeof(adminCheck), 1, passw);
        if(strcmp(adminCheck.adminName, checkName) == 0 &&
           strcmp(adminCheck.adminpass, checkPass) ==0) {
                printf("\n\n\t\t\t\tCorrect......");
                printf("\n\n\t\t\t\tPress Any Key to Continue ..... ");
                getch();
                system("cls");
                welcomeNow();
                printf("\n\n\n\t\t\t\tEnter New Admin Name      : ");
                scanf("%s", adminCheck.adminName);
                printf("\t\t\t\tEnter New Admin Password        : ");
                for(i=0; i<50; i++) {
                    adminCheck.adminpass[i] = getch();
                    if (adminCheck.adminpass[i] == 13) {
                        adminCheck.adminpass[i] = '\0';
                        break;
                    }
                    putchar('*');
                }
                fseek(passw, 0, SEEK_SET);
                fwrite(&adminCheck, sizeof(adminCheck), 1, passw);
                fclose(passw);
                printf("\n\t\t\t\tAdmin Name and Admin Password have been successfully updated ....\n");
                printf("\n\t\t\t\tYou need to Login again .... ");
                getch();
                system("cls");
                //menu();
                main();
           } else {
                printf("\n\n\t\t\t\tIncorrect Admin Name and Admin Password, Please try again... ");
                getch();
                logIn();
           }
    } else {
        system("cls");
        welcomeNow();
        menu();
    }
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
