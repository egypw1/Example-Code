#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Define HOW the function is to be used, code comes later
float degreesToRadians (float values);


int main(void)
{
    // Declare variables - pre-populate the array
    float values[90];
    int i;

    // populating the array with the index value in each position
    for (i = 0; i < 90; i++) {
        values[i] = degreesToRadians((float)i);
    }

    // displaying the indexed values
    for (i = 0; i < 90; i++)
    {
        printf("Index %d contains value %.2f\n", i, values[i]);
    }

    // Exit program
    return 0;
}
    
// function to convert degrees to radians
float degreesToRadians (float values) {
    return (M_PI * values) / 180.0;    // conversion formula
}