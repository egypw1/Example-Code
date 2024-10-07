#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Declaring variables
    float r = 2.75;
    float pi = M_PI;
    float volume, surface_area;

    // Calculating the volume and surface area
    volume = (4 * pi * (r * r * r)) / 3;
    surface_area = 4 * pi * r * r;

    // Displaying the results to 2dp
    printf ("The Volume and Surface are of the sphere are... \nVolume = %.2f m^3\nSurface Area = %.2f m^2\n", volume , surface_area);

    // Exit from main
    return 0;
}