#include <stdio.h>
#include <math.h>   // For M_PI, sin, cos, tan functions

// Function to convert degrees to radians
float degreesToRadians(float degrees) {
    return (float)(M_PI * degrees / 180.0);    // Conversion formula, casted to float
}

// Function to calculate radians, sine, cosine, and tangent of an angle in degrees
void calculateTrigonometricValues(float degrees, float *radians, float *sine, float *cosine, float *tangent) {
    // Convert degrees to radians using the helper function
    *radians = degreesToRadians(degrees);
    
    // Calculate sine, cosine, and tangent values using the angle in radians and cast to float
    *sine = (float)sin(*radians);
    *cosine = (float)cos(*radians);
    *tangent = (float)tan(*radians);
}

int main(void) {
    int start, end;
    float radians, sine, cosine, tangent;

    // Prompt the user to enter the range of degrees
    printf("Enter the starting degree value: ");
    scanf("%d", &start);
    printf("Enter the ending degree value: ");
    scanf("%d", &end);

    // Display the headers for the output
    printf("Degs\tRad\t\tSin\t\tCos\t\tTan\n");

    // Loop through each degree in the specified range
    for (int deg = start; deg <= end; deg++) {
        // Call the calculateTrigonometricValues function for each degree
        calculateTrigonometricValues((float)deg, &radians, &sine, &cosine, &tangent);

        // Display the results for the current degree with precision of 3 decimal points
        printf("%d\t%.3f\t%.3f\t%.3f\t%.3f\n", deg, radians, sine, cosine, tangent);
    }

    return 0;
}
