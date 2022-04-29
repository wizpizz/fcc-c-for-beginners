#include <stdio.h>
#include <stdlib.h>


int writing_files()
{

    FILE * fpointer = fopen("employees.txt", "w"); // creating a pointer to the file to be able to reference it later

    /*
    r read
    a append
    w write
    */

    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting"); // (over)writing to the file

    fclose(fpointer); // referencing the pointer to close the file

    fpointer = fopen("employees.txt", "a"); // append

    fprintf(fpointer, "\nKelly, Customer Service"); // appending to the text

    fclose(fpointer);

    return 0;
}
