#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    char input[20];

    // Prompt the user to enter an integer
    printf("What is your age?: \n");
    
    // Read input from the user
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Check if the input is a valid integer
        char *endptr;
        age = strtol(input, &endptr, 10);

        // If endptr still points to the start of the string, input is not a valid number
        if (*endptr != '\n' && *endptr != '\0') {
            printf("Error: Please enter a valid age (Whole Number!).\n");
            exit(1);
        }

        // Check if the age is in the range 0 to 10
        if (age <= 5) {
            printf("You are still a baby\n");
        }

        else if (age > 5 && age <= 12) {
            printf("You are in your junior years\n");
        }

        else if (age > 12 && age <= 20) {
            printf("Teenage Years\n");
        }
        
        else {
            printf("Downhill from here...");
        }
    }
    return 0 ;
}