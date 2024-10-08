#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Declaring variables
    float r;
    float h;
    float pi = M_PI;
    float surface_area;

    // User to input the radius
    printf ("Please enter the radius of the cylinder [units, m]\n");

    // use scanf with %f to read into 'r' 
    scanf ("%f",&r);	// note the important &

    // User to input the radius
    printf ("Please enter the height of the cylinder [units, m]\n");

    // use scanf with %f to read into 'h' 
    scanf ("%f",&h);	// note the important & 
    
    surface_area = (2 * pi * r * r) + 2 * pi* r * h;

    printf ("The Surface area of the cylinder is... \nSurface Area = %.2f m^2\n", surface_area);

    // Exit from main
    return 0;
}