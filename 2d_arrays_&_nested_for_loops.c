#include <stdio.h>
#include <stdlib.h>


int _2d_arrays_and_nested_for_loops()
{

    int nums[3][2] = { // 2 dimensional arrays require 2 pairs of brackets
        {1, 2},
        {3, 4},
        {5, 6}
    };

    printf("%d\n", nums[0][0]);
    printf("%d\n\n", nums[1][1]);

    int i, j;
    for (i=0;i<3;i++) {
        for (j=0;j<2;j++) {
            printf("%d, ", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}
