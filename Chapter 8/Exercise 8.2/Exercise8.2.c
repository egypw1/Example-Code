#include <stdio.h>
#include <stdlib.h>  // For exit()

int main() {
    int number;
    char input[20];

    // Prompt the user to enter an integer
    printf("Please enter an integer: ");
    
    // Read input from the user
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Check if the input is a valid integer
        char *endptr;
        number = strtol(input, &endptr, 10);

        // If endptr still points to the start of the string, input is not a valid number
        if (*endptr != '\n' && *endptr != '\0') {
            printf("Error: Please enter a valid integer.\n");
            exit(1);
        }

        // Check if the number is in the range 0 to 10
        if (number >= 0 && number <= 10) {
            printf("The number is in range\n");
        }
    }

    return 0;
}    