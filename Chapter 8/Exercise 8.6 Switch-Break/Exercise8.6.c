#include <stdio.h>

int main() {
    int value;
    const char* colour; // Use const char* for string literals

    // Loop until a valid input is received
    while (1) {
        // Prompt the user to enter an integer
        printf("Please enter a value between 0 and 9: ");

        // Use scanf to read the input
        if (scanf("%d", &value) == 1) {
            // Check if the value is in the range 0 to 9
            if (value >= 0 && value <= 9) {
                // Assign the appropriate color based on the value
                switch (value) {
                    case 0: colour = "Black"; break;
                    case 1: colour = "Brown"; break;
                    case 2: colour = "Red"; break;
                    case 3: colour = "Orange"; break;
                    case 4: colour = "Yellow"; break;
                    case 5: colour = "Green"; break;
                    case 6: colour = "Blue"; break;
                    case 7: colour = "Violet"; break;
                    case 8: colour = "Grey"; break;
                    case 9: colour = "White"; break;
                    default: colour = ""; // This should never be reached due to range check
                }

                // Print the chosen color
                printf("The color you have chosen is: %s\n", colour);
                break; // Exit the loop since we got a valid input
            } else {
                // Message if the number is out of range
                printf("The value is outside the range of 0-9. Please try again.\n");
            }
        } 
        else {
            // If the input is not a valid integer
            printf("Error: Please enter a valid whole number between 0 and 9.\n");
            
            // Clear the input buffer to discard invalid input
            while (getchar() != '\n');  // Consume characters until the newline
        }
    }

    return 0;
}