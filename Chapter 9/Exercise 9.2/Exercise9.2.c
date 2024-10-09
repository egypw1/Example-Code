#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   	int age = 1;  			// Declare variable and initialise to 1
    
    while (1) {    // Loops as long as something is entered 
        printf ("\nPlease enter your age: \n");
        
        // checkk if teh input is valid
        if (scanf("%d", &age) == 1 && age > 0) {
            break;      // exit the loop if the input is valid
        }
        else {
            printf("Error: Please enter a valid age. \n");

            // clear the input buffer
            while (getchar() != '\n');  // Discarding invalid inputs
        }
    }

    if (age == 18 || age == 21) {
        // displaying the age and a special message
        printf ("You are %d years old\nYou have come of age!", age);
    }
    else {
        // display the age
       printf ("You are %d years old\n", age); 
    }
        
    return 0;	// Exit code
}