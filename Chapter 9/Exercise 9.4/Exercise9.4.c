#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age;  // Declare variable without initializing
    
    do {
        printf("\nPlease enter your age: ");
        scanf("%d", &age);
        
        if (age != 0) {  // Check if age is not zero before displaying the message
            printf("You are %d years old\n", age);
            
            // Check if the user is 18 or 21
            if (age == 18 || age == 21) {
                printf("You are of age\n");
            }
        }
    } while (age != 0);  // Loop until age is 0

    return 0;  // Exit code
}