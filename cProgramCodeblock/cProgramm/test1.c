#include <stdio.h>
#include <stdlib.h>
#include <string.h> // It is support strcpy

int main()
{
    char name[9] = "min lwin";
    strcpy(name, "kyaw");

    printf("my name is %s", name);
    return 0;
}
