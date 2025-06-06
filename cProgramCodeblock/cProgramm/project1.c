#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"

// average score calculator
// average score show with grading.

int main()
{
    char studentName[50];
    int studentRollNumber;
    int firstTermScore;
    int secondTermScore;
    float averageScore;
    int age;

    printf("That software developer is %s \n", NAME);
    printf("This is average score calculator !!! \n\n");

    // check age under 18 or not
    /*printf("Enter your Age _ ");
    scanf("%d", &age);
    (age > 18) ? printf("welcome, Please enter your name : \n") : printf("Your age is under 18 \n");
    */
    printf("Please your name :  \n");
    //scanf("%s", studentName);
    gets(studentName);
    //printf("Your name is _  %s \n", studentName);
    puts(studentName);

    printf("Please your roll number :  \n");
    scanf("%d", &studentRollNumber);
    printf("Your roll number is _ %d \n", studentRollNumber);

    printf("Please fill your first term score _  \n");
    scanf("%d", &firstTermScore);
    printf("Your first term score is _ %d \n", firstTermScore);
    printf("Please fill your second term score _ \n");
    scanf("%d", &secondTermScore);
    printf("Your second term score is _ %d \n", secondTermScore);
    //printf("Do you already finished your assignment 'Y' or 'N' \n");
    averageScore = (float)(firstTermScore * 0.4) + (float)(secondTermScore * 0.4);
    printf("Your average score is _ %.2f \n", averageScore);

    //show grade using if function
    if (averageScore >= 90) {
        printf("Your average score is 'A' Grade !!");
    }
    else if (averageScore >= 70 && averageScore < 90 ) {
        printf("Your average score is 'B' Grade !!!");
    }
    else if (averageScore >= 50 && averageScore < 70){
        printf("Your average score is 'C' Grade !!!");
    }
    else {
        printf("You fail the exam !!!");
    }


    return 0;

}
