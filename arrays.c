#include <stdio.h>
#include <stdlib.h>

int arrays()
{

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    luckyNumbers[1] = 200;
    printf("%d\n", luckyNumbers[1]);

    int luckyNumbers2[10]; // if the array is not initiliazed, the size must be specified
    luckyNumbers2[1] = 80;
    printf("%d", luckyNumbers2[0]); // no value is assigned to index 0

    return 0;
}
