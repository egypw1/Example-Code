#include <stdio.h>
#include <stdlib.h>

int main(void) // Main : Execution starts here...
{
    // Declare variables - pre-populate the array
    float values[90];
    int i;

    // populating the array with the index value in each position
    for (i = 0; i < 90; i++) {
        values[i] = (float)i;
    }

    // displaying the indexed values
    for (i = 0; i < 90; i++)
    {
        printf("Index %d contains value %.2f\n", i, values[i]);
    }

    // Exit program
    return 0;
}
    
