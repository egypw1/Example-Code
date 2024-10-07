#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    // Declaring variables
    float r = 2.5f;
    float pi = M_PI;
    float volume, surface_area;

    volume = (4 * pi * (r * r * r)) / 3;
    surface_area = 4 * pi * r * r;

    printf ("The Volume and Surface are of the sphere are... \nVolume = %f m^3\nSurface Area = %f m^2", volume , surface_area);

    // Exit from main
    return 0;
}