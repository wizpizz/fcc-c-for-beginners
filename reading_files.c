#include <stdio.h>
#include <stdlib.h>


int reading_files()
{

    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer); // container, size, file
    fgets(line, 255, fpointer); // using it again, stores the second line
    printf("%s", line);

    fclose(fpointer);

    return 0;
}
