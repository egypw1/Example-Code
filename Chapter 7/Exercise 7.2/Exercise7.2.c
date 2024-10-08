#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Declaring variables
    float r;
    float pi = M_PI;
    float volume, surface_area;

    // User to input the radius
    printf ("Please enter the radius of the circle [units, m]\n");

    // use scanf with %f to read into 'r' 
    scanf ("%f",&r);	// note the important & 
    
    // And display on the screen
    printf ("The value you entered for radius is %.2f [m]\n", r);

    volume = (4 * pi * (r * r * r)) / 3;
    surface_area = 4 * pi * r * r;

    printf ("The Volume and Surface are of the sphere are... \nVolume = %.2f m^3\nSurface Area = %.2f m^2\n", volume , surface_area);

    // Exit from main
    return 0;
}