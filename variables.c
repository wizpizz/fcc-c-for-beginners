#include <stdio.h>
#include <stdlib.h>

int variables()
{
    char characterName[] = "Tom"; // a collection of characters
    int characterAge = 67;
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);

    characterAge = 30;
    printf("He really liked the name %s\n", characterName);
    printf("but did not like being %d", characterAge);
    return 0;
}
