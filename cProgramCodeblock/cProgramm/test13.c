#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include "info.h"

int main()
{
    int no1 = 5;
    int no2 = 1;
    int no3 = 3;
    char word1[] = "Kyaw Min Thein";
    size_t length = strlen(word1);
    int *pointer;
    pointer = &no1;
    pointer = &no2;
    pointer = &no3;

    printf("no1 has %d bytes \n\n", sizeof(no1));
    printf("no2 has %d bytes \n\n", sizeof(no2));
    printf("no3 has %d bytes \n\n", sizeof(no3));
    printf("word 1 has %zu bytes \n\n", length); // we use string length for %zu

    printf("Address \t\t Value\n");
    printf("%p\t\t%d\n\n", &no1, no1);

    printf("Address \t\t Value\n");
    printf("%p\t\t%d\n\n", &no2, no2);

    printf("Address \t\t Value\n");
    printf("%p\t\t%d\n\n", &no3, no3);

    //pointer value
    printf("Address \t\t Value\n");
    printf("%p\t\t%d\n\n", pointer, *pointer);

    scanf("%d", pointer);
    printf("%p\t%d\t\t%d\n\n", pointer, pointer, *pointer);
    return 0;

    // တန်ဖိုးကနေ address ချိန်းချင်ရင် & သုံး
    // addrss ကနေ တန်ဖိုး ကို ချိန်းချိင် ရင် * ကိုသုံးရတယ်

}
