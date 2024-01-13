#include <stdio.h>

/** This is a program used to explain the introduction to Bit field.
 * It defines a structure with bit fields
 */
struct my_bit_field {
    unsigned int mode : 3;  /** This 3 bits for mode in carrying out a particular operation **/
};

int main(void) {
    /* Create an instance of the structure */
    struct my_bit_field bitFlags = {3};  // Initialize the mode field with 3

    /* Accessing and printing the bit field values */
    printf("Mode: %d\n", bitFlags.mode);

    return 0;
}
