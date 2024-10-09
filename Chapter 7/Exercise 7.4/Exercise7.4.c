#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declaring variables
    char first_name[51];
    char surname [51];

    // User to input the radius
    printf ("Enter your first name:\n");

    // use scanf with %s to read into a string into 'first_name' 
    scanf ("%s",&first_name);	// note the important &

    // User to input the radius
    printf ("Enter your surname:\n");

    // use scanf with %s to read a string into 'surname' 
    scanf ("%s",&surname);	// note the important &

    // Display on the screen using printf
    printf("Nice to meet you %s %s. Have a good day :)\n", first_name, surname);

    //Exit from main
    return 0;
}