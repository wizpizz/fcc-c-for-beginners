#include <stdio.h>
#include <stdlib.h>

double cube(double num);

int return_statement()
{

    printf("Answer: %f", cube(999.0));

    return 0;
}

// we cannot define the function under main() because it would be called before defining it
// it only works with a prototype above main()

double cube(double num)
{
    double result = num * num * num;
    return result; // breaks out the functions, and returns the var to the caller
}
