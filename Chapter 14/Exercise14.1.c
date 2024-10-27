#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Define how the functions are to be used
// x and y are values copied to the function, where r and theta are pointers (reference)to existing variables
void cartesianToPolar(float x, float y, float *r, float *theta);    

int main (void) 
{
float x, y;
float r, theta;

printf("Enter the x coordinate: ");
scanf("%f", &x);
printf("Enter the y coordinate: ");
scanf("%f", &y);

cartesianToPolar(x, y, &r, &theta);

// Displaying the results
printf("The polar coordinates are:/n");
printf("r = %.2f\n", r);
printf("theta = %.2f\n", theta);

return 0;
}

// Function to calculate polar coordinates (r and theta) from the cartesian coordinates (x and y)
void cartesianToPolar(float x, float y, float *r, float *theta)
{
// Calculating r using the distance forumla
*r = sqrt(x * x + y * y);

// Calculating theta by dividing y / x
*theta = y / x;
}