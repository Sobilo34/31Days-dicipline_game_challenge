#include <stdio.h>

/*This is the project for testing my learning in Memory alloction for Union in C. It initializes a variable for each member and allocate memory implicitly for all members of the Union*/

union myUnion
{
    int integer;
    char charArray[10];
    float float_number;
};

int main(void)
{
	union myUnion example;  /*This will automatocally/implicitly allocate memory for Union 'myUnion'*/

	/* Initializes Integer data type */
	example.integer = 42;
	printf("Integer: %d\n", example.integer);

	/* Initializes charArray data type */
	strcpy(example.charArray, "Sobil");
	printf("Char Array: %s\n", example.charArray);

	/* Initializes float data type */
	example.float_number = 3.14;
	printf("Float Numberr: %.2f\n", example.float_number);

    return 0;
}
