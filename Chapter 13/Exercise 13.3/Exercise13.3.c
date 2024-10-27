#include <stdio.h>
#include <stdlib.h>

int main (void )
{
    // Declare a in integer
    float c,d;

	// Declare an integer pointer
	float *ptrC;

	// Some assgnments
    c = 328.4563f; // C now contains the value 10
    ptrC = &c;   // ptrC now 'Points' to c

    // Get the value of c via the pointer and store in d
    d = *ptrC;  // d now contains 10 (d accesses the address of the pointerC)
    printf ("\nThe value in d is %.4f", d);

    // Change the value of c via the pointer ptrC
    *ptrC = 3.14156f;  //c now contains 1
    printf ("\nThe value in c is %.4f", c);

	return 0;   // exit
}