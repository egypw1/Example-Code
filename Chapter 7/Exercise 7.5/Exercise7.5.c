#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    char name[50];
    int age;

    // Wait for a kepypress
    printf ("Please enter your name:\n");

    // read in using scanf with %s
    scanf ("%s",&name);

    // Wait for a kepypress, store result in c
    printf ("Please enter your age:\n");

    // read in using scanf with %s
    scanf ("%i",&age);

    // Display on the screen using printf
    printf ("Hello %s\nYou are %i years old\n", name, age);

    // Exit from main
    return 0;
}