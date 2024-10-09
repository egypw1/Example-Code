#include <stdio.h>

int main(void) {
    // Loop to count from 1 to 15
    for (int i = 1; i <= 15; i++) {
        // Print the current value of i
        printf("%d", i);

        // Print a space after each number except the last one
        if (i < 15) {
            printf(" ");
        }
    }

    // New line after printing all numbers
    printf("\n");

    return 0;  // Exit code
}