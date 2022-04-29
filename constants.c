#include <stdio.h>
#include <stdlib.h>

int constants()
{
    const int NUM = 5; // constants are mostly written in capital
    printf("%d", NUM);
    // NUM = 8; // throws an error, NUM is read-only
    printf("%d", NUM);

    printf("Hello"); // This is also considered a constant, it cannot be modified

    return 0;
}
