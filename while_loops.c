#include <stdio.h>
#include <stdlib.h>


int while_loops()
{

    int index = 1;

    while (index <= 5) { // loop through until index is less than or equal to 5
        printf("%d\n", index);
        index++; // add 1 to index
    }

    do { // do while loop executes at least once
        printf("%d\n", index);
        index++; // add 1 to index
    } while (index <= 5);

    return 0;
}
