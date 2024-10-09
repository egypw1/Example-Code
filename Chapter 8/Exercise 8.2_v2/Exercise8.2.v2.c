#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter an integer
    printf("Please enter an integer: ");

    // Use scanf to read the input
    if (scanf("%d", &number) == 1) {
        // Check if the number is in the range 0 to 10
        if (number >= 0 && number <= 10) {
            printf("The number is in range\n");
        }
        // No message is displayed if the number is outside the range
    } else {
        // If the input is not a valid integer
        printf("Error: Please enter a valid integer.\n");
    }

    return 0;
}