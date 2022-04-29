#include <stdio.h>
#include <stdlib.h>

int _printf()
{
    int favNum = 90;
    char myChar = 'i';
    printf("My favorite %c is %f", myChar, favNum);
    // %s = string
    // %c = character
    // %d = integer
    // %f = double

    return 0;
}
