#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Declaring functions
float degreesToRadians (float degrees);

void calculateTrigonometricValues(float degrees, float *radians, float *sine, float *cosine, float *tangent);

// Main body of code
int main(void) {
    float degrees;
    float radians, sine, cosine, tangent;

    // Prompt the user to enter an angle in degrees
    printf("Enter an angle in degrees: ");
    scanf("%f", &degrees);

    // Call the calculateTrigonometricValues function
    calculateTrigonometricValues(degrees, &radians, &sine, &cosine, &tangent);

    // Display the results
    printf("For an angle of %.2f degrees:\n", degrees);
    printf("Radians: %.4f\n", radians);
    printf("Sine: %.4f\n", sine);
    printf("Cosine: %.4f\n", cosine);
    printf("Tangent: %.4f\n", tangent);

    return 0;
}

// Function to convert degrees to radians
float degreesToRadians(float degrees) {
    return (M_PI * degrees) / 180.0;    // Conversion formula
}

// Function to calculate radians, sine, cosine, and tangent of an angle in degrees
void calculateTrigonometricValues(float degrees, float *radians, float *sine, float *cosine, float *tangent) {
    // Convert degrees to radians using the helper function
    *radians = degreesToRadians(degrees);
    
    // Calculate sine, cosine, and tangent values using the angle in radians
    *sine = (float)sin(*radians);
    *cosine = (float)cos(*radians);
    *tangent = (float)tan(*radians);
}
