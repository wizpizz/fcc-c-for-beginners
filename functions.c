#include <stdio.h>
#include <stdlib.h>

int functions() // a method || function
{
    printf("Top\n");
    sayHi("Mike", 40);
    sayHi("Tom", 23);
    sayHi("Oscar", 70);
    printf("bottom");
    return 0;
}

void sayHi(char name[], int age)
{
    printf("Hello %s, you are %d\n", name, age);
}
