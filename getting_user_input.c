#include <stdio.h>
#include <stdlib.h>

int getting_user_input() // a method
{
    int age; // declaring the var
    printf("Enter your age: ");
    scanf("%d", &age); // what kind of data we want from the user
    // & a pointer

    printf("You are %d years old\n", age);

    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your gpa is %f\n", gpa);

    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("Your grade is %c\n", grade);

    char name[20]; // specifing the size of the array for C to allocate enough memory, since we don't know the user's input
    printf("Enter your name: ");
    fgets(name, 20, stdin); // fgets() for gettings strings, 20 char limit, where to get the input: stdin
    // fgets() also stroes a newline character when pressing "Enter"
    printf("Your name is %s", name);

    return 0;
}
