#include <stdio.h>
#include <stdlib.h>

struct Student { // structs mostly use capitalized names, unlike an array it can contain different types of data
    char name[50];
    char major[50];
    int age;
    double gpa;

};

int structs()
{
    struct Student student1; // container student1
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim"); // copies the string from the source to a destination
    strcpy(student1.major, "Business");

    struct Student student2;
    student2.age = 20;
    student2.gpa = 2.5;
    strcpy(student2.name, "Pam");
    strcpy(student2.major, "Art");

    printf("%s", student2.name);

    return 0;
}
