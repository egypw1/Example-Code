#include <stdio.h>

int main(void) {

    int lower, upper;
    
    // Asking the user for the lower and upper values
    printf("Enter the lower bound:   \n");
    scanf("%d", &lower);
    printf("Enter the upper bound:   \n");
    scanf("%d", &upper);


    // Checking if the lower bound is greater than the upper bound
    if (lower > upper) {

        printf("The lower bound is greater than the upper bound. I will swap the values for you...\n");

        // swapping the values if entered incorrectly
        int temp;
        lower = upper;
        upper = temp;
    }

    // Initialise sum variable
    int sum = 0;

    // Loop to count from lower to upper bound
    printf("Numbers:    ");
    for (int i = lower; i <= upper; i++) {
        // Print the current value of i
        printf("%d", i);

        //Update the running sim
        sum += i;

        // Print a space after each number except the last one
        if (i < upper) {
            printf(" ");
        }
    }

    // New line after printing all numbers
    printf("\n");

    printf("The sum of the numbers from %d to %d is: %d\n", lower, upper, sum);
    return 0;  // Exit code
}