// CMPS 3350 - lab 1 is all about source control AND git
// Prints each command-line argument passed into the program, one per line
#include <stdio.h>

int main(int argc, char ** argv)
{
    for(int i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
        printf("Hello there");
        printf("General Kenobi");
    }
    return 0;
}

