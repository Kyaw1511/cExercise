#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "info.h"

int main()
{

    int selection;
    printf("Press 1 to add your information \n");
    printf("Press 2 to check your information \n");
    printf("Press 3 to update your information \n");
    printf("Press 4 to delete your information \n");
    printf("Press 0 to exit \n");
    scanf("%d", &selection);
    switch(selection) {
    case 1: printf("\n Now you can add your information\n");
    break;
    case 2: printf("\n Now you can check your information\n");
    break;
    case 3: printf("\n Now you can update your information \n");
    break;
    case 4: printf("\n Now you delete your information \n");
    break;
    case 0: printf("\n Now you exit that software \n");
    break;
    default: return main();
    }
    return 0;
}

