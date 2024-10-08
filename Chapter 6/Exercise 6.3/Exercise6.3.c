#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    unsigned int a = 60, b = 13, r;

    // bitwise AND operation
    r = a & b;    

    // Displaying the results in hex
    printf ("a AND b is equal to... \nresult = 0x%x\n", r);

    // bitwise OR operation
    r = a | b;    
    
    // Displaying the results in hex
    printf ("a OR b is equal to... \nresult = 0x%x\n", r);

    // bitwise XOR operation
    r = a ^ b;    
    
    // Displaying the results in hex
    printf ("a XOR b is equal to... \nresult = 0x%x\n", r);

    // bitwise Ones Compliment operation
    r = ~a; 
    
    // Displaying the results in hex
    printf ("a flipped is equal to... \nresult = 0x%x\n", r);

    // bitwise left bit shift operation
    r = a << 2;    
    
    // Displaying the results in hex
    printf ("a bit shifted twice left is... \nresult = 0x%x\n", r);

    // bitwise right bit shift operation
    r = a >> 2;    
    
    // Displaying the results in hex
    printf ("a bit shifted twice right is... \nresult = 0x%x\n", r);
        
    return 0;	// Exit from main
}