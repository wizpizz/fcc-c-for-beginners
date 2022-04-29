#include <stdio.h>
#include <stdlib.h>


int pointers()
{

    // pointer is a memory address

    int age = 30;
    int * pAge = &age; // a pointer variable that stores the memory address of the age value
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;


    printf("age's memory address: %p\n", &age);

    return 0;
}
