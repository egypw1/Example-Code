#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Declaring variables
    float r;                    // radius of the cylinder
    float h;                    // height of teh cylinder
    const float pi = M_PI;            // Constant for pi
    float surface_area;         // Variable to hold the surface area

    // Input for radius with validation
    while (1) {
        printf ("Please enter the radius of the cylinder [units, m]:\n");

        // Check if input is valid
        if (scanf("%f", &r) == 1 && r > 0) {
            break;      // exit the loop if the input is valid
        }
        else {
            printf("Error: Please enter a valid positive number for the radius.\n");
            // clear the input buffer
            while (getchar() != '\n');   // Discard invalid input
        }
    }

    // Input for height with validation
    while (1) {
        printf ("Please enter the height of the cylinder [units, m]:\n");

        // Check if input is valid
        if (scanf("%f", &h) == 1 && h > 0) {
            break;      // exit the loop if the input is valid
        }
        else {
            printf("Error: Please enter a valid positive number for the height.\n");
            // clear the input buffer
            while (getchar() != '\n');   // Discard invalid input
        }
    }
    
    // calculating the sureface area
    surface_area = (2 * pi * r * r) + 2 * pi* r * h;

    // outputting the result
    printf ("The Surface area of the cylinder is... \nSurface Area = %.2f m^2\n", surface_area);

    // Exit from main
    return 0;
}