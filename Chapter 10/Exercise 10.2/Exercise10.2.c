#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Define HOW the function is to be used, code comes later
float degreesToRadians (float degrees);

int main (void) {
    float degrees, radians;

    // promt the user to enter a value in degrees
    printf("Enter the angle in degrees:   ");
    scanf("%f", &degrees);

    // call the conversion function
    radians = degreesToRadians(degrees);

    // display the result
    printf("The angle in radians is: %.2f\n", radians);

    return 0;
}

// function to convert degrees to radians
float degreesToRadians (float degrees) {
    return (M_PI * degrees) / 180.0;    // conversion formula
}