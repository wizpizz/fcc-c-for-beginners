#include <stdio.h>
#include <stdlib.h>


int dereferencing_pointers()
{

    int age = 30;
    int * pAge = &age;

    printf("%p\n", pAge);
    printf("%d\n", *pAge); // dereferencing a pointer, grabbing the value of age with its memory address
    printf("%d\n", *&age);

    return 0;
}
