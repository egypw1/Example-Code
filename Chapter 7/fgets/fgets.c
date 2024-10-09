#include <stdio.h>
#include <stdlib.h>
int main ()
{
    // Declaring varibale
    char MyName [50];
    int age;

    // Printed text
    printf("\nWhat is your name?\n ");

    //fgets limits the number of characters read
    fgets (MyName, 50, stdin);

    // Printing text
    printf("\nHow old are you?\n ");
    
    // read in using scanf with %s
    scanf ("%d", &age);

    // printing the information
    printf ("\nHello %s\nYou are %d years old\n", MyName, age);

    return 0;
}