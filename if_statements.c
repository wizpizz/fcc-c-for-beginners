#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3)
{
    int result;

    if (num1 >= num2 && num1 >= num3) {
        result = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

int if_statements()
{
    if (3 > 2 || 2 > 5) { // logical or operator, only requires one of the conditions to be true
        printf("True\n");
    } else {
        print("False\n");
    }
    if (!(3 < 2)) { // negation operator
        printf("True\n");
    }

    printf("%d", max(10, 2, 3));
    return 0;
}
