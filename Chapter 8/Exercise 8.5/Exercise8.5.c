#include <stdio.h>

int main() {
    int value;
    char* colour;

    // Prompt the user to enter an integer
    printf("Please enter a value between 0 and 9: ");

    // Use scanf to read the input
    if (scanf("%d", &value) == 1) {
        // Check if the value is in the range 0 to 9
        if (value >= 0 && value <= 9) {
            if (value == 0) {
                colour = "Black";
            }
            else if (value == 1) {
                colour = "Brown";
            }
            else if (value == 2) {
                colour = "Red";
            }
            else if (value == 3) {
                colour = "Orange";
            }
            else if (value == 4) {
                colour = "Yellow";
            }
            else if (value == 5) {
                colour = "Green";
            }
            else if (value == 6) {
                colour = "Blue";
            }
            else if (value == 7) {
                colour = "Violet";
            }
            else if (value == 8) {
                colour = "Grey";
            }
            else {
                colour = "White";
            }
            // Print the chosen colour
            printf("The colout you have chosen is: %s\n", colour);
        }
        else{
        // message if the number is out fo range
        printf("The value is outside the range of 0-9.\n");
        }
    } 
    else {
        // If the input is not a valid integer
        printf("Error: Please enter a valid input :(\n");
    }
    return 0;
}